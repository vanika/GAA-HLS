#include <iostream>
#include <string>
#include <verilated.h>
#include "Vmain_tb.h"

#if VM_TRACE
# include <verilated_vcd_c.h>
#endif


#define SIMULATION_MAX 400000000ULL

static vluint64_t CLOCK_PERIOD = 1000*10;
static vluint64_t HALF_CLOCK_PERIOD = CLOCK_PERIOD/2;

vluint64_t main_time = 0;

double sc_time_stamp ()  {return main_time/1000.0;}

int main (int argc, char **argv, char **env)
{
      Vmain_tb *top;
   
      std::string vcd_output_filename = "/media/sf_GA/GeneticSolver/HLS_output//simulation/test.vcd";
      Verilated::commandArgs(argc, argv);
      Verilated::debug(0);
      top = new Vmain_tb;
      
      
      #if VM_TRACE
      Verilated::traceEverOn(true);
      VerilatedVcdC* tfp = new VerilatedVcdC;
      #endif
      main_time=0;
   #if VM_TRACE
      top->trace (tfp, 99);
      tfp->set_time_unit("n");
      tfp->set_time_resolution("p");
      tfp->open (vcd_output_filename.c_str());
   #endif
      long long int cycleCounter = 0;
      top->clock = 1;
      while (!Verilated::gotFinish() && cycleCounter < SIMULATION_MAX)
      {
           top->clock = top->clock == 0 ? 1 : 0;
           top->eval();
      #if VM_TRACE
           if (tfp) tfp->dump (main_time);
      #endif
           main_time += HALF_CLOCK_PERIOD;
           cycleCounter++;
         }
   if(cycleCounter>=SIMULATION_MAX)
     std::cerr << "Simulation not completed into 200000000 cycles\n";
   #if VM_TRACE
      if (tfp) tfp->dump (main_time);
   #endif
      top->final();
      #if VM_TRACE
      tfp->close();
      delete tfp;
      #endif
      delete top;
      exit(0L);
}

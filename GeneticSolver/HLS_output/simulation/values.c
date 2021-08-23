/*
 * Politecnico di Milano
 * Code created using PandA - Version: PandA 0.9.7-dev - Revision 151822f6eb6b28b68ef7cde4c7c3c0add185ed9d-panda-0.9.7-dev - Date 2021-08-23T16:02:09
 * bambu executed with: bambu --simulate -fno-guess-branch-probability -fno-ivopts -funroll-all-loops -O2 mips.c 
 */
#define _FILE_OFFSET_BITS 64

#define __Inf (1.0/0.0)
#define __Nan (0.0/0.0)

#ifdef __cplusplus
#include <cstdio>

#include <cstdlib>

typedef bool _Bool;

#else
#include <stdio.h>

#include <stdlib.h>

extern void exit(int status);
#endif

#include <sys/types.h>
//global variable used to store the output file
FILE * __bambu_testbench_fp;

//variable used to detect a standard end of the main (exit has not been called)
unsigned int __standard_exit;
//definition of __bambu_testbench_exit function
void __bambu_testbench_exit(void) __attribute__ ((destructor));
void __bambu_testbench_exit(void)
{
   if (!__standard_exit)
   {
      fprintf(__bambu_testbench_fp, "//expected value for return value\n");
      fprintf(__bambu_testbench_fp, "o00000000000000000000000000000000\n");
      fprintf(__bambu_testbench_fp, "e\n");
   }
}

void _Dec2Bin_(FILE * __bambu_testbench_fp, long long int num, unsigned int precision)
{
   unsigned int i;
   unsigned long long int ull_value = (unsigned long long int) num;
   for (i = 0; i < precision; ++i)
   fprintf(__bambu_testbench_fp, "%c", (((1LLU << (precision - i -1)) & ull_value) ? '1' : '0'));
}

void _Ptd2Bin_(FILE * __bambu_testbench_fp, unsigned char * num, unsigned int precision)
{
   unsigned int i, j;
   char value;
   if (precision%8)
   {
      value = *(num+precision/8);
      for (j = 8-precision%8; j < 8; ++j)
      fprintf(__bambu_testbench_fp, "%c", (((1LLU << (8 - j - 1)) & value) ? '1' : '0'));
   }
   for (i = 0; i < 8*(precision/8); i = i + 8)
   {
      value = *(num + (precision / 8) - (i / 8) - 1);
      for (j = 0; j < 8; ++j)
      fprintf(__bambu_testbench_fp, "%c", (((1LLU << (8 - j - 1)) & value) ? '1' : '0'));
   }
}

#undef main
int main()
{
   unsigned int __testbench_index, __testbench_index0, __testbench_index1, __testbench_index2;
   __standard_exit = 0;
   __bambu_testbench_fp = fopen("/media/sf_GA/GeneticSolver/HLS_output//simulation/values.txt", "w");
   if (!__bambu_testbench_fp) {
      perror("can't open file: /media/sf_GA/GeneticSolver/HLS_output//simulation/values.txt");
      exit(1);
   }
   
   // parameters declaration
   fprintf(__bambu_testbench_fp, "//base address 1073741824\n");
   fprintf(__bambu_testbench_fp, "b01000000000000000000000000000000\n");
   {
   }
   // return variable initialization
   int return_port;
   {
      // parameter initialization
      // function call
      return_port = system("/media/sf_GA/GeneticSolver/HLS_output//simulation/main_exec");
      if(return_port != 0) exit(1);
      // print expected results
      fprintf(__bambu_testbench_fp, "o");
      _Dec2Bin_(__bambu_testbench_fp, return_port, 32);
      fprintf(__bambu_testbench_fp, "\n");
      fprintf(__bambu_testbench_fp, "e\n");
   }
   __standard_exit = 1;
   exit(0);
}


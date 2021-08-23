#!/bin/bash
##########################################################
#     Automatically generated by the PandA framework     #
##########################################################

# Simulation script for COMPONENT: main

cd /media/sf_GA/GeneticSolver
verilator --cc --exe --Mdir /media/sf_GA/GeneticSolver/HLS_output//verilator_beh/verilator_obj -Wno-fatal -Wno-lint -sv -O3 /media/sf_GA/GeneticSolver/top.v /media/sf_GA/GeneticSolver/HLS_output//simulation/testbench_main_main.cpp /media/sf_GA/GeneticSolver/HLS_output//simulation/testbench_main_tb.v --top-module main_tb
if [ $? -ne 0 ]; then
   exit 1;
fi


ln -s /media/sf_GA/GeneticSolver/HLS_output/ /media/sf_GA/GeneticSolver/HLS_output//verilator_beh/verilator_obj
make -C /media/sf_GA/GeneticSolver/HLS_output//verilator_beh/verilator_obj -j1 OPT_FAST="-O1 -fstrict-aliasing -march=native" -f Vmain_tb.mk Vmain_tb

/media/sf_GA/GeneticSolver/HLS_output//verilator_beh/verilator_obj/Vmain_tb 2>&1 | tee /media/sf_GA/GeneticSolver/HLS_output//verilator_beh/main_verilator.log


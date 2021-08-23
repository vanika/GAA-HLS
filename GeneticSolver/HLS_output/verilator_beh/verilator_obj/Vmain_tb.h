// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Primary design header
//
// This header should be included by all source files instantiating the design.
// The class here is then constructed to instantiate the design.
// See the Verilator manual for examples.

#ifndef _Vmain_tb_H_
#define _Vmain_tb_H_

#include "verilated_heavy.h"

class Vmain_tb__Syms;

//----------

VL_MODULE(Vmain_tb) {
  public:
    
    // PORTS
    // The application code writes and reads these signals to
    // propagate new values into/out from the Verilated model.
    VL_IN8(clock,0,0);
    
    // LOCAL SIGNALS
    // Internals; generally not touched by application code
    VL_SIG8(main_tb__DOT__compare_outputs,0,0);
    VL_SIG8(main_tb__DOT__success,0,0);
    VL_SIG8(main_tb__DOT___bambu_databyte_,7,0);
    VL_SIG8(main_tb__DOT_____05Fstate,3,0);
    VL_SIG8(main_tb__DOT_____05Fnext_state,3,0);
    VL_SIG8(main_tb__DOT__start_results_comparison,0,0);
    VL_SIG8(main_tb__DOT__next_start_port,0,0);
    VL_SIG8(main_tb__DOT__reset,0,0);
    VL_SIG8(main_tb__DOT__start_port,0,0);
    VL_SIG8(main_tb__DOT__main__DOT___main_i0__DOT__done_delayed_REG_signal_in,0,0);
    VL_SIG8(main_tb__DOT__main__DOT___main_i0__DOT__fuselector_ARRAY_1D_STD_BRAM_NN_SDS_2_i0_STORE,0,0);
    VL_SIG8(main_tb__DOT__main__DOT___main_i0__DOT__fuselector_ARRAY_1D_STD_BRAM_NN_SDS_2_i1_STORE,0,0);
    VL_SIG8(main_tb__DOT__main__DOT___main_i0__DOT__fuselector_ARRAY_1D_STD_BRAM_NN_SDS_3_i0_STORE,0,0);
    VL_SIG8(main_tb__DOT__main__DOT___main_i0__DOT__fuselector_ARRAY_1D_STD_BRAM_NN_SDS_3_i1_STORE,0,0);
    VL_SIG8(main_tb__DOT__main__DOT___main_i0__DOT__selector_MUX_0_ARRAY_1D_STD_BRAM_NN_SDS_2_i0_0_0_0,0,0);
    VL_SIG8(main_tb__DOT__main__DOT___main_i0__DOT__selector_MUX_0_ARRAY_1D_STD_BRAM_NN_SDS_2_i0_0_0_1,0,0);
    VL_SIG8(main_tb__DOT__main__DOT___main_i0__DOT__selector_MUX_0_ARRAY_1D_STD_BRAM_NN_SDS_2_i0_0_1_0,0,0);
    VL_SIG8(main_tb__DOT__main__DOT___main_i0__DOT__selector_MUX_12_ARRAY_1D_STD_BRAM_NN_SDS_3_i1_0_0_0,0,0);
    VL_SIG8(main_tb__DOT__main__DOT___main_i0__DOT__selector_MUX_12_ARRAY_1D_STD_BRAM_NN_SDS_3_i1_0_0_1,0,0);
    VL_SIG8(main_tb__DOT__main__DOT___main_i0__DOT__selector_MUX_12_ARRAY_1D_STD_BRAM_NN_SDS_3_i1_0_0_3,0,0);
    VL_SIG8(main_tb__DOT__main__DOT___main_i0__DOT__selector_MUX_12_ARRAY_1D_STD_BRAM_NN_SDS_3_i1_0_0_4,0,0);
    VL_SIG8(main_tb__DOT__main__DOT___main_i0__DOT__selector_MUX_12_ARRAY_1D_STD_BRAM_NN_SDS_3_i1_0_1_0,0,0);
    VL_SIG8(main_tb__DOT__main__DOT___main_i0__DOT__selector_MUX_12_ARRAY_1D_STD_BRAM_NN_SDS_3_i1_0_1_1,0,0);
    VL_SIG8(main_tb__DOT__main__DOT___main_i0__DOT__selector_MUX_12_ARRAY_1D_STD_BRAM_NN_SDS_3_i1_0_2_0,0,0);
    VL_SIG8(main_tb__DOT__main__DOT___main_i0__DOT__selector_MUX_133_i_assign_conn_obj_37_0_0_0,0,0);
    VL_SIG8(main_tb__DOT__main__DOT___main_i0__DOT__selector_MUX_13_ARRAY_1D_STD_BRAM_NN_SDS_3_i1_1_0_0,0,0);
    VL_SIG8(main_tb__DOT__main__DOT___main_i0__DOT__selector_MUX_13_ARRAY_1D_STD_BRAM_NN_SDS_3_i1_1_0_1,0,0);
    VL_SIG8(main_tb__DOT__main__DOT___main_i0__DOT__selector_MUX_13_ARRAY_1D_STD_BRAM_NN_SDS_3_i1_1_0_2,0,0);
    VL_SIG8(main_tb__DOT__main__DOT___main_i0__DOT__selector_MUX_13_ARRAY_1D_STD_BRAM_NN_SDS_3_i1_1_1_0,0,0);
    VL_SIG8(main_tb__DOT__main__DOT___main_i0__DOT__selector_MUX_13_ARRAY_1D_STD_BRAM_NN_SDS_3_i1_1_1_1,0,0);
    VL_SIG8(main_tb__DOT__main__DOT___main_i0__DOT__selector_MUX_180_lshift_expr_FU_32_32_32_179_i0_1_0_0,0,0);
    VL_SIG8(main_tb__DOT__main__DOT___main_i0__DOT__selector_MUX_1_ARRAY_1D_STD_BRAM_NN_SDS_2_i0_1_0_0,0,0);
    VL_SIG8(main_tb__DOT__main__DOT___main_i0__DOT__selector_MUX_1_ARRAY_1D_STD_BRAM_NN_SDS_2_i0_1_0_1,0,0);
    VL_SIG8(main_tb__DOT__main__DOT___main_i0__DOT__selector_MUX_1_ARRAY_1D_STD_BRAM_NN_SDS_2_i0_1_0_2,0,0);
    VL_SIG8(main_tb__DOT__main__DOT___main_i0__DOT__selector_MUX_1_ARRAY_1D_STD_BRAM_NN_SDS_2_i0_1_0_3,0,0);
    VL_SIG8(main_tb__DOT__main__DOT___main_i0__DOT__selector_MUX_1_ARRAY_1D_STD_BRAM_NN_SDS_2_i0_1_0_4,0,0);
    VL_SIG8(main_tb__DOT__main__DOT___main_i0__DOT__selector_MUX_1_ARRAY_1D_STD_BRAM_NN_SDS_2_i0_1_1_0,0,0);
    VL_SIG8(main_tb__DOT__main__DOT___main_i0__DOT__selector_MUX_1_ARRAY_1D_STD_BRAM_NN_SDS_2_i0_1_1_1,0,0);
    VL_SIG8(main_tb__DOT__main__DOT___main_i0__DOT__selector_MUX_1_ARRAY_1D_STD_BRAM_NN_SDS_2_i0_1_2_0,0,0);
    VL_SIG8(main_tb__DOT__main__DOT___main_i0__DOT__selector_MUX_476_reg_102_0_0_0,0,0);
    VL_SIG8(main_tb__DOT__main__DOT___main_i0__DOT__selector_MUX_485_reg_19_0_0_0,0,0);
    VL_SIG8(main_tb__DOT__main__DOT___main_i0__DOT__selector_MUX_488_reg_21_0_0_0,0,0);
    VL_SIG8(main_tb__DOT__main__DOT___main_i0__DOT__selector_MUX_489_reg_22_0_0_0,0,0);
    VL_SIG8(main_tb__DOT__main__DOT___main_i0__DOT__selector_MUX_490_reg_23_0_0_0,0,0);
    VL_SIG8(main_tb__DOT__main__DOT___main_i0__DOT__selector_MUX_492_reg_25_0_0_0,0,0);
    VL_SIG8(main_tb__DOT__main__DOT___main_i0__DOT__selector_MUX_4_ARRAY_1D_STD_BRAM_NN_SDS_2_i1_0_0_0,0,0);
    VL_SIG8(main_tb__DOT__main__DOT___main_i0__DOT__selector_MUX_4_ARRAY_1D_STD_BRAM_NN_SDS_2_i1_0_0_1,0,0);
    VL_SIG8(main_tb__DOT__main__DOT___main_i0__DOT__selector_MUX_4_ARRAY_1D_STD_BRAM_NN_SDS_2_i1_0_0_2,0,0);
    VL_SIG8(main_tb__DOT__main__DOT___main_i0__DOT__selector_MUX_4_ARRAY_1D_STD_BRAM_NN_SDS_2_i1_0_1_0,0,0);
    VL_SIG8(main_tb__DOT__main__DOT___main_i0__DOT__selector_MUX_565_reg_91_0_0_0,0,0);
    VL_SIG8(main_tb__DOT__main__DOT___main_i0__DOT__selector_MUX_565_reg_91_0_0_1,0,0);
    VL_SIG8(main_tb__DOT__main__DOT___main_i0__DOT__selector_MUX_566_reg_92_0_0_0,0,0);
    VL_SIG8(main_tb__DOT__main__DOT___main_i0__DOT__selector_MUX_566_reg_92_0_0_1,0,0);
    VL_SIG8(main_tb__DOT__main__DOT___main_i0__DOT__selector_MUX_567_reg_93_0_0_0,0,0);
    VL_SIG8(main_tb__DOT__main__DOT___main_i0__DOT__selector_MUX_567_reg_93_0_0_1,0,0);
    VL_SIG8(main_tb__DOT__main__DOT___main_i0__DOT__selector_MUX_567_reg_93_0_0_2,0,0);
    VL_SIG8(main_tb__DOT__main__DOT___main_i0__DOT__selector_MUX_567_reg_93_0_1_0,0,0);
    VL_SIG8(main_tb__DOT__main__DOT___main_i0__DOT__selector_MUX_567_reg_93_0_1_1,0,0);
    VL_SIG8(main_tb__DOT__main__DOT___main_i0__DOT__selector_MUX_573_reg_99_0_0_0,0,0);
    VL_SIG8(main_tb__DOT__main__DOT___main_i0__DOT__selector_MUX_583_rshift_expr_FU_32_32_32_199_i0_1_0_0,0,0);
    VL_SIG8(main_tb__DOT__main__DOT___main_i0__DOT__selector_MUX_5_ARRAY_1D_STD_BRAM_NN_SDS_2_i1_1_0_0,0,0);
    VL_SIG8(main_tb__DOT__main__DOT___main_i0__DOT__selector_MUX_5_ARRAY_1D_STD_BRAM_NN_SDS_2_i1_1_0_1,0,0);
    VL_SIG8(main_tb__DOT__main__DOT___main_i0__DOT__selector_MUX_5_ARRAY_1D_STD_BRAM_NN_SDS_2_i1_1_0_2,0,0);
    VL_SIG8(main_tb__DOT__main__DOT___main_i0__DOT__selector_MUX_5_ARRAY_1D_STD_BRAM_NN_SDS_2_i1_1_0_3,0,0);
    VL_SIG8(main_tb__DOT__main__DOT___main_i0__DOT__selector_MUX_5_ARRAY_1D_STD_BRAM_NN_SDS_2_i1_1_1_0,0,0);
    VL_SIG8(main_tb__DOT__main__DOT___main_i0__DOT__selector_MUX_5_ARRAY_1D_STD_BRAM_NN_SDS_2_i1_1_1_1,0,0);
    VL_SIG8(main_tb__DOT__main__DOT___main_i0__DOT__selector_MUX_5_ARRAY_1D_STD_BRAM_NN_SDS_2_i1_1_2_0,0,0);
    VL_SIG8(main_tb__DOT__main__DOT___main_i0__DOT__selector_MUX_8_ARRAY_1D_STD_BRAM_NN_SDS_3_i0_0_0_0,0,0);
    VL_SIG8(main_tb__DOT__main__DOT___main_i0__DOT__selector_MUX_8_ARRAY_1D_STD_BRAM_NN_SDS_3_i0_0_0_1,0,0);
    VL_SIG8(main_tb__DOT__main__DOT___main_i0__DOT__selector_MUX_8_ARRAY_1D_STD_BRAM_NN_SDS_3_i0_0_0_3,0,0);
    VL_SIG8(main_tb__DOT__main__DOT___main_i0__DOT__selector_MUX_8_ARRAY_1D_STD_BRAM_NN_SDS_3_i0_0_0_4,0,0);
    VL_SIG8(main_tb__DOT__main__DOT___main_i0__DOT__selector_MUX_8_ARRAY_1D_STD_BRAM_NN_SDS_3_i0_0_0_5,0,0);
    VL_SIG8(main_tb__DOT__main__DOT___main_i0__DOT__selector_MUX_8_ARRAY_1D_STD_BRAM_NN_SDS_3_i0_0_0_6,0,0);
    VL_SIG8(main_tb__DOT__main__DOT___main_i0__DOT__selector_MUX_8_ARRAY_1D_STD_BRAM_NN_SDS_3_i0_0_0_7,0,0);
    VL_SIG8(main_tb__DOT__main__DOT___main_i0__DOT__selector_MUX_8_ARRAY_1D_STD_BRAM_NN_SDS_3_i0_0_1_0,0,0);
    VL_SIG8(main_tb__DOT__main__DOT___main_i0__DOT__selector_MUX_8_ARRAY_1D_STD_BRAM_NN_SDS_3_i0_0_1_1,0,0);
    VL_SIG8(main_tb__DOT__main__DOT___main_i0__DOT__selector_MUX_8_ARRAY_1D_STD_BRAM_NN_SDS_3_i0_0_1_2,0,0);
    VL_SIG8(main_tb__DOT__main__DOT___main_i0__DOT__selector_MUX_8_ARRAY_1D_STD_BRAM_NN_SDS_3_i0_0_1_3,0,0);
    VL_SIG8(main_tb__DOT__main__DOT___main_i0__DOT__selector_MUX_8_ARRAY_1D_STD_BRAM_NN_SDS_3_i0_0_2_0,0,0);
    VL_SIG8(main_tb__DOT__main__DOT___main_i0__DOT__selector_MUX_8_ARRAY_1D_STD_BRAM_NN_SDS_3_i0_0_2_1,0,0);
    VL_SIG8(main_tb__DOT__main__DOT___main_i0__DOT__selector_MUX_9_ARRAY_1D_STD_BRAM_NN_SDS_3_i0_1_0_0,0,0);
    VL_SIG8(main_tb__DOT__main__DOT___main_i0__DOT__selector_MUX_9_ARRAY_1D_STD_BRAM_NN_SDS_3_i0_1_0_1,0,0);
    VL_SIG8(main_tb__DOT__main__DOT___main_i0__DOT__selector_MUX_9_ARRAY_1D_STD_BRAM_NN_SDS_3_i0_1_1_0,0,0);
    VL_SIG8(main_tb__DOT__main__DOT___main_i0__DOT__wrenable_reg_1,0,0);
    VL_SIG8(main_tb__DOT__main__DOT___main_i0__DOT__wrenable_reg_10,0,0);
    VL_SIG8(main_tb__DOT__main__DOT___main_i0__DOT__wrenable_reg_100,0,0);
    VL_SIG8(main_tb__DOT__main__DOT___main_i0__DOT__wrenable_reg_102,0,0);
    VL_SIG8(main_tb__DOT__main__DOT___main_i0__DOT__wrenable_reg_11,0,0);
    VL_SIG8(main_tb__DOT__main__DOT___main_i0__DOT__wrenable_reg_12,0,0);
    VL_SIG8(main_tb__DOT__main__DOT___main_i0__DOT__wrenable_reg_13,0,0);
    VL_SIG8(main_tb__DOT__main__DOT___main_i0__DOT__wrenable_reg_14,0,0);
    VL_SIG8(main_tb__DOT__main__DOT___main_i0__DOT__wrenable_reg_15,0,0);
    VL_SIG8(main_tb__DOT__main__DOT___main_i0__DOT__wrenable_reg_16,0,0);
    VL_SIG8(main_tb__DOT__main__DOT___main_i0__DOT__wrenable_reg_17,0,0);
    VL_SIG8(main_tb__DOT__main__DOT___main_i0__DOT__wrenable_reg_18,0,0);
    VL_SIG8(main_tb__DOT__main__DOT___main_i0__DOT__wrenable_reg_19,0,0);
    VL_SIG8(main_tb__DOT__main__DOT___main_i0__DOT__wrenable_reg_2,0,0);
    VL_SIG8(main_tb__DOT__main__DOT___main_i0__DOT__wrenable_reg_20,0,0);
    VL_SIG8(main_tb__DOT__main__DOT___main_i0__DOT__wrenable_reg_21,0,0);
    VL_SIG8(main_tb__DOT__main__DOT___main_i0__DOT__wrenable_reg_22,0,0);
    VL_SIG8(main_tb__DOT__main__DOT___main_i0__DOT__wrenable_reg_23,0,0);
    VL_SIG8(main_tb__DOT__main__DOT___main_i0__DOT__wrenable_reg_24,0,0);
    VL_SIG8(main_tb__DOT__main__DOT___main_i0__DOT__wrenable_reg_25,0,0);
    VL_SIG8(main_tb__DOT__main__DOT___main_i0__DOT__wrenable_reg_26,0,0);
    VL_SIG8(main_tb__DOT__main__DOT___main_i0__DOT__wrenable_reg_3,0,0);
    VL_SIG8(main_tb__DOT__main__DOT___main_i0__DOT__wrenable_reg_4,0,0);
    VL_SIG8(main_tb__DOT__main__DOT___main_i0__DOT__wrenable_reg_45,0,0);
    VL_SIG8(main_tb__DOT__main__DOT___main_i0__DOT__wrenable_reg_46,0,0);
    VL_SIG8(main_tb__DOT__main__DOT___main_i0__DOT__wrenable_reg_47,0,0);
    VL_SIG8(main_tb__DOT__main__DOT___main_i0__DOT__wrenable_reg_5,0,0);
    VL_SIG8(main_tb__DOT__main__DOT___main_i0__DOT__wrenable_reg_6,0,0);
    VL_SIG8(main_tb__DOT__main__DOT___main_i0__DOT__wrenable_reg_62,0,0);
    VL_SIG8(main_tb__DOT__main__DOT___main_i0__DOT__wrenable_reg_63,0,0);
    VL_SIG8(main_tb__DOT__main__DOT___main_i0__DOT__wrenable_reg_64,0,0);
    VL_SIG8(main_tb__DOT__main__DOT___main_i0__DOT__wrenable_reg_65,0,0);
    VL_SIG8(main_tb__DOT__main__DOT___main_i0__DOT__wrenable_reg_7,0,0);
    VL_SIG8(main_tb__DOT__main__DOT___main_i0__DOT__wrenable_reg_8,0,0);
    VL_SIG8(main_tb__DOT__main__DOT___main_i0__DOT__wrenable_reg_82,0,0);
    VL_SIG8(main_tb__DOT__main__DOT___main_i0__DOT__wrenable_reg_83,0,0);
    VL_SIG8(main_tb__DOT__main__DOT___main_i0__DOT__wrenable_reg_9,0,0);
    VL_SIG8(main_tb__DOT__main__DOT___main_i0__DOT__wrenable_reg_90,0,0);
    VL_SIG8(main_tb__DOT__main__DOT___main_i0__DOT__wrenable_reg_91,0,0);
    VL_SIG8(main_tb__DOT__main__DOT___main_i0__DOT__wrenable_reg_92,0,0);
    VL_SIG8(main_tb__DOT__main__DOT___main_i0__DOT__wrenable_reg_93,0,0);
    VL_SIG8(main_tb__DOT__main__DOT___main_i0__DOT__wrenable_reg_94,0,0);
    VL_SIG8(main_tb__DOT__main__DOT___main_i0__DOT__wrenable_reg_95,0,0);
    VL_SIG8(main_tb__DOT__main__DOT___main_i0__DOT__wrenable_reg_97,0,0);
    VL_SIG8(main_tb__DOT__main__DOT___main_i0__DOT__Datapath_i__DOT__out_MUX_488_reg_21_0_0_0,6,0);
    VL_SIG8(main_tb__DOT__main__DOT___main_i0__DOT__Datapath_i__DOT__out_MUX_489_reg_22_0_0_0,5,0);
    VL_SIG8(main_tb__DOT__main__DOT___main_i0__DOT__Datapath_i__DOT__array_26230_0__DOT__ARRAY_1D_STD_BRAM_NN_instance__DOT__bram_write,1,0);
    VL_SIG8(main_tb__DOT__main__DOT___main_i0__DOT__Datapath_i__DOT__array_26263_0__DOT__ARRAY_1D_STD_BRAM_NN_instance__DOT__bram_write,1,0);
    VL_SIG8(main_tb__DOT__main__DOT___main_i0__DOT__Datapath_i__DOT__fu_main_26084_27162__DOT__cleaned_in0,7,0);
    VL_SIG8(main_tb__DOT__main__DOT___main_i0__DOT__Datapath_i__DOT__fu_main_26084_27162__DOT__in0,7,0);
    VL_SIG8(main_tb__DOT__main__DOT___main_i0__DOT__Datapath_i__DOT__fu_main_26084_27165__DOT__cleaned_in0,7,0);
    VL_SIG8(main_tb__DOT__main__DOT___main_i0__DOT__Datapath_i__DOT__fu_main_26084_27165__DOT__in0,7,0);
    VL_SIG8(main_tb__DOT__main__DOT___main_i0__DOT__Datapath_i__DOT__fu_main_26084_27168__DOT__cleaned_in0,7,0);
    VL_SIG8(main_tb__DOT__main__DOT___main_i0__DOT__Datapath_i__DOT__fu_main_26084_27168__DOT__in0,7,0);
    VL_SIG8(main_tb__DOT__main__DOT___main_i0__DOT__Datapath_i__DOT__fu_main_26084_27172__DOT__cleaned_in0,7,0);
    VL_SIG8(main_tb__DOT__main__DOT___main_i0__DOT__Datapath_i__DOT__fu_main_26084_27172__DOT__in0,7,0);
    VL_SIG8(main_tb__DOT__main__DOT___main_i0__DOT__Datapath_i__DOT__fu_main_26084_27175__DOT__cleaned_in0,7,0);
    VL_SIG8(main_tb__DOT__main__DOT___main_i0__DOT__Datapath_i__DOT__fu_main_26084_27175__DOT__in0,7,0);
    VL_SIG8(main_tb__DOT__main__DOT___main_i0__DOT__Datapath_i__DOT__fu_main_26084_27178__DOT__cleaned_in0,7,0);
    VL_SIG8(main_tb__DOT__main__DOT___main_i0__DOT__Datapath_i__DOT__fu_main_26084_27178__DOT__in0,7,0);
    VL_SIG8(main_tb__DOT__main__DOT___main_i0__DOT__Datapath_i__DOT__fu_main_26084_27181__DOT__cleaned_in0,7,0);
    VL_SIG8(main_tb__DOT__main__DOT___main_i0__DOT__Datapath_i__DOT__fu_main_26084_27181__DOT__in0,7,0);
    VL_SIG8(main_tb__DOT__main__DOT___main_i0__DOT__Datapath_i__DOT__fu_main_26084_27184__DOT__cleaned_in0,7,0);
    VL_SIG8(main_tb__DOT__main__DOT___main_i0__DOT__Datapath_i__DOT__fu_main_26084_27184__DOT__in0,7,0);
    VL_SIG8(main_tb__DOT__main__DOT___main_i0__DOT__Datapath_i__DOT__fu_main_26084_27187__DOT__cleaned_in0,7,0);
    VL_SIG8(main_tb__DOT__main__DOT___main_i0__DOT__Datapath_i__DOT__fu_main_26084_27187__DOT__in0,7,0);
    VL_SIG8(main_tb__DOT__main__DOT___main_i0__DOT__Datapath_i__DOT__fu_main_26084_27190__DOT__cleaned_in0,7,0);
    VL_SIG8(main_tb__DOT__main__DOT___main_i0__DOT__Datapath_i__DOT__fu_main_26084_27190__DOT__in0,7,0);
    VL_SIG8(main_tb__DOT__main__DOT___main_i0__DOT__Datapath_i__DOT__fu_main_26084_27193__DOT__cleaned_in0,7,0);
    VL_SIG8(main_tb__DOT__main__DOT___main_i0__DOT__Datapath_i__DOT__fu_main_26084_27193__DOT__in0,7,0);
    VL_SIG8(main_tb__DOT__main__DOT___main_i0__DOT__Datapath_i__DOT__fu_main_26084_27196__DOT__cleaned_in0,7,0);
    VL_SIG8(main_tb__DOT__main__DOT___main_i0__DOT__Datapath_i__DOT__fu_main_26084_27196__DOT__in0,7,0);
    VL_SIG8(main_tb__DOT__main__DOT___main_i0__DOT__Datapath_i__DOT__fu_main_26084_27199__DOT__cleaned_in0,7,0);
    VL_SIG8(main_tb__DOT__main__DOT___main_i0__DOT__Datapath_i__DOT__fu_main_26084_27199__DOT__in0,7,0);
    VL_SIG8(main_tb__DOT__main__DOT___main_i0__DOT__Datapath_i__DOT__fu_main_26084_27202__DOT__cleaned_in0,7,0);
    VL_SIG8(main_tb__DOT__main__DOT___main_i0__DOT__Datapath_i__DOT__fu_main_26084_27202__DOT__in0,7,0);
    VL_SIG8(main_tb__DOT__main__DOT___main_i0__DOT__Datapath_i__DOT__fu_main_26084_27205__DOT__cleaned_in0,7,0);
    VL_SIG8(main_tb__DOT__main__DOT___main_i0__DOT__Datapath_i__DOT__fu_main_26084_27205__DOT__in0,7,0);
    VL_SIG8(main_tb__DOT__main__DOT___main_i0__DOT__Datapath_i__DOT__fu_main_26084_27208__DOT__cleaned_in0,7,0);
    VL_SIG8(main_tb__DOT__main__DOT___main_i0__DOT__Datapath_i__DOT__fu_main_26084_27208__DOT__in0,7,0);
    VL_SIG8(main_tb__DOT__main__DOT___main_i0__DOT__Datapath_i__DOT__fu_main_26084_27211__DOT__cleaned_in0,7,0);
    VL_SIG8(main_tb__DOT__main__DOT___main_i0__DOT__Datapath_i__DOT__fu_main_26084_27211__DOT__in0,7,0);
    VL_SIG8(main_tb__DOT__main__DOT___main_i0__DOT__Datapath_i__DOT__fu_main_26084_27214__DOT__cleaned_in0,7,0);
    VL_SIG8(main_tb__DOT__main__DOT___main_i0__DOT__Datapath_i__DOT__fu_main_26084_27214__DOT__in0,7,0);
    VL_SIG8(main_tb__DOT__main__DOT___main_i0__DOT__Datapath_i__DOT__fu_main_26084_27217__DOT__cleaned_in0,7,0);
    VL_SIG8(main_tb__DOT__main__DOT___main_i0__DOT__Datapath_i__DOT__fu_main_26084_27217__DOT__in0,7,0);
    VL_SIG8(main_tb__DOT__main__DOT___main_i0__DOT__Datapath_i__DOT__fu_main_26084_27221__DOT__cleaned_in0,7,0);
    VL_SIG8(main_tb__DOT__main__DOT___main_i0__DOT__Datapath_i__DOT__fu_main_26084_27221__DOT__in0,7,0);
    VL_SIG8(main_tb__DOT__main__DOT___main_i0__DOT__Datapath_i__DOT__fu_main_26084_27224__DOT__cleaned_in0,7,0);
    VL_SIG8(main_tb__DOT__main__DOT___main_i0__DOT__Datapath_i__DOT__fu_main_26084_27224__DOT__in0,7,0);
    VL_SIG8(main_tb__DOT__main__DOT___main_i0__DOT__Datapath_i__DOT__fu_main_26084_27227__DOT__cleaned_in0,7,0);
    VL_SIG8(main_tb__DOT__main__DOT___main_i0__DOT__Datapath_i__DOT__fu_main_26084_27227__DOT__in0,7,0);
    VL_SIG8(main_tb__DOT__main__DOT___main_i0__DOT__Datapath_i__DOT__fu_main_26084_27230__DOT__cleaned_in0,7,0);
    VL_SIG8(main_tb__DOT__main__DOT___main_i0__DOT__Datapath_i__DOT__fu_main_26084_27230__DOT__in0,7,0);
    VL_SIG8(main_tb__DOT__main__DOT___main_i0__DOT__Datapath_i__DOT__fu_main_26084_27233__DOT__cleaned_in0,7,0);
    VL_SIG8(main_tb__DOT__main__DOT___main_i0__DOT__Datapath_i__DOT__fu_main_26084_27233__DOT__in0,7,0);
    VL_SIG8(main_tb__DOT__main__DOT___main_i0__DOT__Datapath_i__DOT__fu_main_26084_27236__DOT__cleaned_in0,7,0);
    VL_SIG8(main_tb__DOT__main__DOT___main_i0__DOT__Datapath_i__DOT__fu_main_26084_27236__DOT__in0,7,0);
    VL_SIG8(main_tb__DOT__main__DOT___main_i0__DOT__Datapath_i__DOT__fu_main_26084_27239__DOT__cleaned_in0,7,0);
    VL_SIG8(main_tb__DOT__main__DOT___main_i0__DOT__Datapath_i__DOT__fu_main_26084_27239__DOT__in0,7,0);
    VL_SIG8(main_tb__DOT__main__DOT___main_i0__DOT__Datapath_i__DOT__fu_main_26084_27242__DOT__cleaned_in0,7,0);
    VL_SIG8(main_tb__DOT__main__DOT___main_i0__DOT__Datapath_i__DOT__fu_main_26084_27242__DOT__in0,7,0);
    VL_SIG8(main_tb__DOT__main__DOT___main_i0__DOT__Datapath_i__DOT__fu_main_26084_27245__DOT__cleaned_in0,7,0);
    VL_SIG8(main_tb__DOT__main__DOT___main_i0__DOT__Datapath_i__DOT__fu_main_26084_27245__DOT__in0,7,0);
    VL_SIG8(main_tb__DOT__main__DOT___main_i0__DOT__Datapath_i__DOT__fu_main_26084_27248__DOT__cleaned_in0,7,0);
    VL_SIG8(main_tb__DOT__main__DOT___main_i0__DOT__Datapath_i__DOT__fu_main_26084_27248__DOT__in0,7,0);
    VL_SIG8(main_tb__DOT__main__DOT___main_i0__DOT__Datapath_i__DOT__fu_main_26084_27251__DOT__cleaned_in0,7,0);
    VL_SIG8(main_tb__DOT__main__DOT___main_i0__DOT__Datapath_i__DOT__fu_main_26084_27251__DOT__in0,7,0);
    VL_SIG8(main_tb__DOT__main__DOT___main_i0__DOT__Datapath_i__DOT__fu_main_26084_27254__DOT__cleaned_in0,7,0);
    VL_SIG8(main_tb__DOT__main__DOT___main_i0__DOT__Datapath_i__DOT__fu_main_26084_27254__DOT__in0,7,0);
    VL_SIG8(main_tb__DOT__main__DOT___main_i0__DOT__Datapath_i__DOT__fu_main_26084_28788__DOT__cleaned_in0,7,0);
    VL_SIG8(main_tb__DOT__main__DOT___main_i0__DOT__Datapath_i__DOT__fu_main_26084_28788__DOT__in0,7,0);
    VL_SIG8(main_tb__DOT__main__DOT___main_i0__DOT__Datapath_i__DOT__reg_100__DOT__reg_out1,5,0);
    VL_SIG8(main_tb__DOT__main__DOT___main_i0__DOT__Datapath_i__DOT__reg_21__DOT__reg_out1,5,0);
    VL_SIG8(main_tb__DOT__main__DOT___main_i0__DOT__Datapath_i__DOT__reg_22__DOT__reg_out1,4,0);
    VL_SIG8(main_tb__DOT__main__DOT___main_i0__DOT__Datapath_i__DOT__reg_26__DOT__reg_out1,5,0);
    VL_SIG8(main_tb__DOT__main__DOT___main_i0__DOT__Datapath_i__DOT__reg_27__DOT__reg_out1,0,0);
    VL_SIG8(main_tb__DOT__main__DOT___main_i0__DOT__Datapath_i__DOT__reg_28__DOT__reg_out1,0,0);
    VL_SIG8(main_tb__DOT__main__DOT___main_i0__DOT__Datapath_i__DOT__reg_29__DOT__reg_out1,0,0);
    VL_SIG8(main_tb__DOT__main__DOT___main_i0__DOT__Datapath_i__DOT__reg_30__DOT__reg_out1,0,0);
    VL_SIG8(main_tb__DOT__main__DOT___main_i0__DOT__Datapath_i__DOT__reg_31__DOT__reg_out1,0,0);
    VL_SIG8(main_tb__DOT__main__DOT___main_i0__DOT__Datapath_i__DOT__reg_32__DOT__reg_out1,0,0);
    VL_SIG8(main_tb__DOT__main__DOT___main_i0__DOT__Datapath_i__DOT__reg_33__DOT__reg_out1,0,0);
    VL_SIG8(main_tb__DOT__main__DOT___main_i0__DOT__Datapath_i__DOT__reg_34__DOT__reg_out1,0,0);
    VL_SIG8(main_tb__DOT__main__DOT___main_i0__DOT__Datapath_i__DOT__reg_35__DOT__reg_out1,0,0);
    VL_SIG8(main_tb__DOT__main__DOT___main_i0__DOT__Datapath_i__DOT__reg_36__DOT__reg_out1,0,0);
    VL_SIG8(main_tb__DOT__main__DOT___main_i0__DOT__Datapath_i__DOT__reg_37__DOT__reg_out1,0,0);
    VL_SIG8(main_tb__DOT__main__DOT___main_i0__DOT__Datapath_i__DOT__reg_38__DOT__reg_out1,0,0);
    VL_SIG8(main_tb__DOT__main__DOT___main_i0__DOT__Datapath_i__DOT__reg_39__DOT__reg_out1,0,0);
    VL_SIG8(main_tb__DOT__main__DOT___main_i0__DOT__Datapath_i__DOT__reg_40__DOT__reg_out1,0,0);
    VL_SIG8(main_tb__DOT__main__DOT___main_i0__DOT__Datapath_i__DOT__reg_41__DOT__reg_out1,0,0);
    VL_SIG8(main_tb__DOT__main__DOT___main_i0__DOT__Datapath_i__DOT__reg_42__DOT__reg_out1,0,0);
    VL_SIG8(main_tb__DOT__main__DOT___main_i0__DOT__Datapath_i__DOT__reg_43__DOT__reg_out1,6,0);
    VL_SIG8(main_tb__DOT__main__DOT___main_i0__DOT__Datapath_i__DOT__reg_45__DOT__reg_out1,6,0);
    VL_SIG8(main_tb__DOT__main__DOT___main_i0__DOT__Datapath_i__DOT__reg_48__DOT__reg_out1,1,0);
    VL_SIG8(main_tb__DOT__main__DOT___main_i0__DOT__Datapath_i__DOT__reg_49__DOT__reg_out1,1,0);
    VL_SIG8(main_tb__DOT__main__DOT___main_i0__DOT__Datapath_i__DOT__reg_66__DOT__reg_out1,0,0);
    VL_SIG8(main_tb__DOT__main__DOT___main_i0__DOT__Datapath_i__DOT__reg_67__DOT__reg_out1,0,0);
    VL_SIG8(main_tb__DOT__main__DOT___main_i0__DOT__Datapath_i__DOT__reg_68__DOT__reg_out1,0,0);
    VL_SIG8(main_tb__DOT__main__DOT___main_i0__DOT__Datapath_i__DOT__reg_69__DOT__reg_out1,0,0);
    VL_SIG8(main_tb__DOT__main__DOT___main_i0__DOT__Datapath_i__DOT__reg_70__DOT__reg_out1,0,0);
    VL_SIG8(main_tb__DOT__main__DOT___main_i0__DOT__Datapath_i__DOT__reg_71__DOT__reg_out1,0,0);
    VL_SIG8(main_tb__DOT__main__DOT___main_i0__DOT__Datapath_i__DOT__reg_72__DOT__reg_out1,0,0);
    VL_SIG8(main_tb__DOT__main__DOT___main_i0__DOT__Datapath_i__DOT__reg_73__DOT__reg_out1,0,0);
    VL_SIG8(main_tb__DOT__main__DOT___main_i0__DOT__Datapath_i__DOT__reg_74__DOT__reg_out1,0,0);
    VL_SIG8(main_tb__DOT__main__DOT___main_i0__DOT__Datapath_i__DOT__reg_75__DOT__reg_out1,0,0);
    VL_SIG8(main_tb__DOT__main__DOT___main_i0__DOT__Datapath_i__DOT__reg_76__DOT__reg_out1,0,0);
    VL_SIG8(main_tb__DOT__main__DOT___main_i0__DOT__Datapath_i__DOT__reg_77__DOT__reg_out1,0,0);
    VL_SIG8(main_tb__DOT__main__DOT___main_i0__DOT__Datapath_i__DOT__reg_78__DOT__reg_out1,6,0);
    VL_SIG8(main_tb__DOT__main__DOT___main_i0__DOT__Datapath_i__DOT__reg_80__DOT__reg_out1,1,0);
    VL_SIG8(main_tb__DOT__main__DOT___main_i0__DOT__Datapath_i__DOT__reg_87__DOT__reg_out1,1,0);
    VL_SIG8(main_tb__DOT__main__DOT___main_i0__DOT__Datapath_i__DOT__reg_88__DOT__reg_out1,1,0);
    VL_SIG8(main_tb__DOT__main__DOT___main_i0__DOT__Datapath_i__DOT__reg_95__DOT__reg_out1,1,0);
    VL_SIG8(main_tb__DOT__main__DOT___main_i0__DOT__Datapath_i__DOT__reg_96__DOT__reg_out1,1,0);
    VL_SIG8(main_tb__DOT__main__DOT___main_i0__DOT__Datapath_i__DOT__reg_97__DOT__reg_out1,3,0);
    VL_SIG8(main_tb__DOT__main__DOT___main_i0__DOT__Datapath_i__DOT__reg_98__DOT__reg_out1,1,0);
    VL_SIG8(main_tb__DOT__main__DOT___main_i0__DOT__Datapath_i__DOT__reg_99__DOT__reg_out1,1,0);
    VL_SIG8(main_tb__DOT__main__DOT___main_i0__DOT__done_delayed_REG__DOT__reg_out1,0,0);
    VL_SIG16(main_tb__DOT__main__DOT___main_i0__DOT__Datapath_i__DOT__out_ui_pointer_plus_expr_FU_16_0_16_209_i0_fu_main_26084_27262,10,0);
    VL_SIG16(main_tb__DOT__main__DOT___main_i0__DOT__Datapath_i__DOT__out_ui_pointer_plus_expr_FU_16_0_16_210_i0_fu_main_26084_28775,11,0);
    VL_SIG16(main_tb__DOT__main__DOT___main_i0__DOT__Datapath_i__DOT__out_ui_pointer_plus_expr_FU_8_0_8_212_i0_fu_main_26084_27307,8,0);
    VL_SIG16(main_tb__DOT__main__DOT___main_i0__DOT__Datapath_i__DOT__out_ui_pointer_plus_expr_FU_8_0_8_213_i0_fu_main_26084_27333,8,0);
    VL_SIG16(main_tb__DOT__main__DOT___main_i0__DOT__Datapath_i__DOT__out_ui_pointer_plus_expr_FU_8_0_8_214_i0_fu_main_26084_27346,8,0);
    VL_SIG16(main_tb__DOT__main__DOT___main_i0__DOT__Datapath_i__DOT__out_ui_pointer_plus_expr_FU_8_0_8_215_i0_fu_main_26084_27359,8,0);
    VL_SIG16(main_tb__DOT__main__DOT___main_i0__DOT__Datapath_i__DOT__out_ui_pointer_plus_expr_FU_8_0_8_216_i0_fu_main_26084_27372,8,0);
    VL_SIG16(main_tb__DOT__main__DOT___main_i0__DOT__Datapath_i__DOT__out_ui_pointer_plus_expr_FU_8_0_8_217_i0_fu_main_26084_27385,8,0);
    VL_SIG16(main_tb__DOT__main__DOT___main_i0__DOT__Datapath_i__DOT__out_ui_pointer_plus_expr_FU_8_0_8_218_i0_fu_main_26084_27398,8,0);
    VL_SIG16(main_tb__DOT__main__DOT___main_i0__DOT__Datapath_i__DOT__out_ui_pointer_plus_expr_FU_8_0_8_219_i0_fu_main_26084_28137,8,0);
    VL_SIG16(main_tb__DOT__main__DOT___main_i0__DOT__Datapath_i__DOT__out_ui_pointer_plus_expr_FU_8_0_8_220_i0_fu_main_26084_28643,8,0);
    VL_SIG16(main_tb__DOT__main__DOT___main_i0__DOT__Datapath_i__DOT__out_ui_pointer_plus_expr_FU_8_0_8_221_i0_fu_main_26084_28656,8,0);
    VL_SIG16(main_tb__DOT__main__DOT___main_i0__DOT__Datapath_i__DOT__out_ui_pointer_plus_expr_FU_8_0_8_222_i0_fu_main_26084_28669,8,0);
    VL_SIG16(main_tb__DOT__main__DOT___main_i0__DOT__Datapath_i__DOT__out_ui_pointer_plus_expr_FU_8_0_8_223_i0_fu_main_26084_28682,8,0);
    VL_SIG16(main_tb__DOT__main__DOT___main_i0__DOT__Datapath_i__DOT__out_ui_pointer_plus_expr_FU_8_0_8_224_i0_fu_main_26084_28695,8,0);
    VL_SIG16(main_tb__DOT__main__DOT___main_i0__DOT__Datapath_i__DOT__out_ui_pointer_plus_expr_FU_8_0_8_225_i0_fu_main_26084_28708,8,0);
    VL_SIG16(main_tb__DOT__main__DOT___main_i0__DOT__Datapath_i__DOT__out_ui_pointer_plus_expr_FU_8_0_8_226_i0_fu_main_26084_28721,8,0);
    VL_SIG16(main_tb__DOT__main__DOT___main_i0__DOT__Datapath_i__DOT__out_ui_pointer_plus_expr_FU_8_8_8_227_i0_fu_main_26084_27286,8,0);
    VL_SIG16(main_tb__DOT__main__DOT___main_i0__DOT__Datapath_i__DOT__out_ui_pointer_plus_expr_FU_8_8_8_227_i1_fu_main_26084_28119,8,0);
    VL_SIG16(main_tb__DOT__main__DOT___main_i0__DOT__Datapath_i__DOT__out_ui_pointer_plus_expr_FU_8_8_8_227_i2_fu_main_26084_28312,8,0);
    VL_SIG16(main_tb__DOT__main__DOT___main_i0__DOT__Datapath_i__DOT__out_ui_pointer_plus_expr_FU_8_8_8_227_i3_fu_main_26084_28379,8,0);
    VL_SIG16(main_tb__DOT__main__DOT___main_i0__DOT__Datapath_i__DOT__out_ui_pointer_plus_expr_FU_8_8_8_227_i4_fu_main_26084_28609,8,0);
    VL_SIG16(main_tb__DOT__main__DOT___main_i0__DOT__Datapath_i__DOT__out_ui_pointer_plus_expr_FU_8_8_8_227_i5_ui_pointer_plus_expr_FU_8_8_8_227_i5,8,0);
    VL_SIG16(main_tb__DOT__main__DOT___main_i0__DOT__Datapath_i__DOT__out_ui_pointer_plus_expr_FU_8_8_8_227_i6_ui_pointer_plus_expr_FU_8_8_8_227_i6,8,0);
    VL_SIG16(main_tb__DOT__main__DOT___main_i0__DOT__Datapath_i__DOT__out_ui_pointer_plus_expr_FU_8_8_8_227_i7_ui_pointer_plus_expr_FU_8_8_8_227_i7,8,0);
    VL_SIG16(main_tb__DOT__main__DOT___main_i0__DOT__Datapath_i__DOT__array_26081_0__DOT__memory_addr_a,11,0);
    VL_SIG16(main_tb__DOT__main__DOT___main_i0__DOT__Datapath_i__DOT__array_26230_0__DOT__ARRAY_1D_STD_BRAM_NN_instance__DOT__memory_addr_a,11,0);
    VL_SIG16(main_tb__DOT__main__DOT___main_i0__DOT__Datapath_i__DOT__array_26263_0__DOT__ARRAY_1D_STD_BRAM_NN_instance__DOT__memory_addr_a,9,0);
    VL_SIG16(main_tb__DOT__main__DOT___main_i0__DOT__Datapath_i__DOT__reg_1__DOT__reg_out1,8,0);
    VL_SIG16(main_tb__DOT__main__DOT___main_i0__DOT__Datapath_i__DOT__reg_10__DOT__reg_out1,8,0);
    VL_SIG16(main_tb__DOT__main__DOT___main_i0__DOT__Datapath_i__DOT__reg_101__DOT__reg_out1,8,0);
    VL_SIG16(main_tb__DOT__main__DOT___main_i0__DOT__Datapath_i__DOT__reg_11__DOT__reg_out1,8,0);
    VL_SIG16(main_tb__DOT__main__DOT___main_i0__DOT__Datapath_i__DOT__reg_12__DOT__reg_out1,8,0);
    VL_SIG16(main_tb__DOT__main__DOT___main_i0__DOT__Datapath_i__DOT__reg_13__DOT__reg_out1,8,0);
    VL_SIG16(main_tb__DOT__main__DOT___main_i0__DOT__Datapath_i__DOT__reg_14__DOT__reg_out1,8,0);
    VL_SIG16(main_tb__DOT__main__DOT___main_i0__DOT__Datapath_i__DOT__reg_15__DOT__reg_out1,8,0);
    VL_SIG16(main_tb__DOT__main__DOT___main_i0__DOT__Datapath_i__DOT__reg_16__DOT__reg_out1,8,0);
    VL_SIG16(main_tb__DOT__main__DOT___main_i0__DOT__Datapath_i__DOT__reg_17__DOT__reg_out1,8,0);
    VL_SIG16(main_tb__DOT__main__DOT___main_i0__DOT__Datapath_i__DOT__reg_18__DOT__reg_out1,8,0);
    VL_SIG16(main_tb__DOT__main__DOT___main_i0__DOT__Datapath_i__DOT__reg_2__DOT__reg_out1,8,0);
    VL_SIG16(main_tb__DOT__main__DOT___main_i0__DOT__Datapath_i__DOT__reg_20__DOT__reg_out1,9,0);
    VL_SIG16(main_tb__DOT__main__DOT___main_i0__DOT__Datapath_i__DOT__reg_3__DOT__reg_out1,8,0);
    VL_SIG16(main_tb__DOT__main__DOT___main_i0__DOT__Datapath_i__DOT__reg_4__DOT__reg_out1,8,0);
    VL_SIG16(main_tb__DOT__main__DOT___main_i0__DOT__Datapath_i__DOT__reg_44__DOT__reg_out1,8,0);
    VL_SIG16(main_tb__DOT__main__DOT___main_i0__DOT__Datapath_i__DOT__reg_46__DOT__reg_out1,8,0);
    VL_SIG16(main_tb__DOT__main__DOT___main_i0__DOT__Datapath_i__DOT__reg_47__DOT__reg_out1,8,0);
    VL_SIG16(main_tb__DOT__main__DOT___main_i0__DOT__Datapath_i__DOT__reg_5__DOT__reg_out1,8,0);
    VL_SIG16(main_tb__DOT__main__DOT___main_i0__DOT__Datapath_i__DOT__reg_6__DOT__reg_out1,8,0);
    VL_SIG16(main_tb__DOT__main__DOT___main_i0__DOT__Datapath_i__DOT__reg_63__DOT__reg_out1,15,0);
    VL_SIG16(main_tb__DOT__main__DOT___main_i0__DOT__Datapath_i__DOT__reg_64__DOT__reg_out1,15,0);
    VL_SIG16(main_tb__DOT__main__DOT___main_i0__DOT__Datapath_i__DOT__reg_7__DOT__reg_out1,8,0);
    VL_SIG16(main_tb__DOT__main__DOT___main_i0__DOT__Datapath_i__DOT__reg_8__DOT__reg_out1,8,0);
    VL_SIG16(main_tb__DOT__main__DOT___main_i0__DOT__Datapath_i__DOT__reg_81__DOT__reg_out1,15,0);
    VL_SIG16(main_tb__DOT__main__DOT___main_i0__DOT__Datapath_i__DOT__reg_82__DOT__reg_out1,8,0);
    VL_SIG16(main_tb__DOT__main__DOT___main_i0__DOT__Datapath_i__DOT__reg_83__DOT__reg_out1,8,0);
    VL_SIG16(main_tb__DOT__main__DOT___main_i0__DOT__Datapath_i__DOT__reg_85__DOT__reg_out1,8,0);
    VL_SIG16(main_tb__DOT__main__DOT___main_i0__DOT__Datapath_i__DOT__reg_86__DOT__reg_out1,8,0);
    VL_SIG16(main_tb__DOT__main__DOT___main_i0__DOT__Datapath_i__DOT__reg_9__DOT__reg_out1,8,0);
    VL_SIG(main_tb__DOT__res_file,31,0);
    VL_SIG(main_tb__DOT__file,31,0);
    VL_SIG(main_tb__DOT___r_,31,0);
    VL_SIG(main_tb__DOT___n_,31,0);
    VL_SIG(main_tb__DOT___i_,31,0);
    VL_SIG(main_tb__DOT___addr_i_,31,0);
    VL_SIG(main_tb__DOT___ch_,31,0);
    VL_SIGW(main_tb__DOT__line,8000,0,251);
    VL_SIG(main_tb__DOT__base_addr,31,0);
    VL_SIG(main_tb__DOT__ex_return_port,31,0);
    VL_SIG(main_tb__DOT__registered_return_port,31,0);
    VL_SIGW(main_tb__DOT__main__DOT___main_i0__DOT__Controller_i__DOT___present_state,91,0,3);
    VL_SIGW(main_tb__DOT__main__DOT___main_i0__DOT__Controller_i__DOT___next_state,91,0,3);
    VL_SIG(main_tb__DOT__main__DOT___main_i0__DOT__Datapath_i__DOT__out_MUX_492_reg_25_0_0_0,31,0);
    VL_SIG(main_tb__DOT__main__DOT___main_i0__DOT__Datapath_i__DOT__out_MUX_567_reg_93_0_1_1,31,0);
    VL_SIG(main_tb__DOT__main__DOT___main_i0__DOT__Datapath_i__DOT__out_bit_and_expr_FU_32_32_32_166_i0_fu_main_26084_26451,16,0);
    VL_SIG(main_tb__DOT__main__DOT___main_i0__DOT__Datapath_i__DOT__out_conv_out_reg_100_reg_100_I_6_I_32,31,0);
    VL_SIG(main_tb__DOT__main__DOT___main_i0__DOT__Datapath_i__DOT__out_ui_pointer_plus_expr_FU_32_0_32_211_i0_fu_main_26084_28778,31,0);
    VL_SIG(main_tb__DOT__main__DOT___main_i0__DOT__Datapath_i__DOT__array_26081_0__DOT__tmp_addr,19,0);
    VL_SIG(main_tb__DOT__main__DOT___main_i0__DOT__Datapath_i__DOT__array_26081_0__DOT__relative_addr,19,0);
    VL_SIG(main_tb__DOT__main__DOT___main_i0__DOT__Datapath_i__DOT__array_26230_0__DOT__ARRAY_1D_STD_BRAM_NN_instance__DOT__tmp_addr,19,0);
    VL_SIG(main_tb__DOT__main__DOT___main_i0__DOT__Datapath_i__DOT__array_26230_0__DOT__ARRAY_1D_STD_BRAM_NN_instance__DOT__relative_addr,19,0);
    VL_SIG(main_tb__DOT__main__DOT___main_i0__DOT__Datapath_i__DOT__array_26263_0__DOT__ARRAY_1D_STD_BRAM_NN_instance__DOT__tmp_addr,19,0);
    VL_SIG(main_tb__DOT__main__DOT___main_i0__DOT__Datapath_i__DOT__array_26263_0__DOT__ARRAY_1D_STD_BRAM_NN_instance__DOT__relative_addr,19,0);
    VL_SIG(main_tb__DOT__main__DOT___main_i0__DOT__Datapath_i__DOT__reg_102__DOT__reg_out1,31,0);
    VL_SIG(main_tb__DOT__main__DOT___main_i0__DOT__Datapath_i__DOT__reg_19__DOT__reg_out1,31,0);
    VL_SIG(main_tb__DOT__main__DOT___main_i0__DOT__Datapath_i__DOT__reg_23__DOT__reg_out1,31,0);
    VL_SIG(main_tb__DOT__main__DOT___main_i0__DOT__Datapath_i__DOT__reg_24__DOT__reg_out1,28,0);
    VL_SIG(main_tb__DOT__main__DOT___main_i0__DOT__Datapath_i__DOT__reg_25__DOT__reg_out1,31,0);
    VL_SIG(main_tb__DOT__main__DOT___main_i0__DOT__Datapath_i__DOT__reg_50__DOT__reg_out1,31,0);
    VL_SIG(main_tb__DOT__main__DOT___main_i0__DOT__Datapath_i__DOT__reg_51__DOT__reg_out1,31,0);
    VL_SIG(main_tb__DOT__main__DOT___main_i0__DOT__Datapath_i__DOT__reg_52__DOT__reg_out1,31,0);
    VL_SIG(main_tb__DOT__main__DOT___main_i0__DOT__Datapath_i__DOT__reg_53__DOT__reg_out1,31,0);
    VL_SIG(main_tb__DOT__main__DOT___main_i0__DOT__Datapath_i__DOT__reg_54__DOT__reg_out1,31,0);
    VL_SIG(main_tb__DOT__main__DOT___main_i0__DOT__Datapath_i__DOT__reg_56__DOT__reg_out1,31,0);
    VL_SIG(main_tb__DOT__main__DOT___main_i0__DOT__Datapath_i__DOT__reg_57__DOT__reg_out1,31,0);
    VL_SIG(main_tb__DOT__main__DOT___main_i0__DOT__Datapath_i__DOT__reg_58__DOT__reg_out1,31,0);
    VL_SIG(main_tb__DOT__main__DOT___main_i0__DOT__Datapath_i__DOT__reg_60__DOT__reg_out1,31,0);
    VL_SIG(main_tb__DOT__main__DOT___main_i0__DOT__Datapath_i__DOT__reg_61__DOT__reg_out1,31,0);
    VL_SIG(main_tb__DOT__main__DOT___main_i0__DOT__Datapath_i__DOT__reg_62__DOT__reg_out1,16,0);
    VL_SIG(main_tb__DOT__main__DOT___main_i0__DOT__Datapath_i__DOT__reg_65__DOT__reg_out1,31,0);
    VL_SIG(main_tb__DOT__main__DOT___main_i0__DOT__Datapath_i__DOT__reg_79__DOT__reg_out1,29,0);
    VL_SIG(main_tb__DOT__main__DOT___main_i0__DOT__Datapath_i__DOT__reg_84__DOT__reg_out1,31,0);
    VL_SIG(main_tb__DOT__main__DOT___main_i0__DOT__Datapath_i__DOT__reg_89__DOT__reg_out1,31,0);
    VL_SIG(main_tb__DOT__main__DOT___main_i0__DOT__Datapath_i__DOT__reg_90__DOT__reg_out1,31,0);
    VL_SIG(main_tb__DOT__main__DOT___main_i0__DOT__Datapath_i__DOT__reg_91__DOT__reg_out1,31,0);
    VL_SIG(main_tb__DOT__main__DOT___main_i0__DOT__Datapath_i__DOT__reg_92__DOT__reg_out1,31,0);
    VL_SIG(main_tb__DOT__main__DOT___main_i0__DOT__Datapath_i__DOT__reg_93__DOT__reg_out1,31,0);
    VL_SIG(main_tb__DOT__main__DOT___main_i0__DOT__Datapath_i__DOT__reg_94__DOT__reg_out1,31,0);
    VL_SIG64(main_tb__DOT__startTime,63,0);
    VL_SIG64(main_tb__DOT__endTime,63,0);
    VL_SIG64(main_tb__DOT__sim_time,63,0);
    VL_SIG64(main_tb__DOT__main__DOT___main_i0__DOT__Datapath_i__DOT__out_ui_widen_mult_expr_FU_32_32_64_0_234_i0_fu_main_26084_26335,63,0);
    VL_SIG64(main_tb__DOT__main__DOT___main_i0__DOT__Datapath_i__DOT__out_widen_mult_expr_FU_32_32_64_0_235_i0_fu_main_26084_26764,63,0);
    VL_SIG64(main_tb__DOT__main__DOT___main_i0__DOT__Datapath_i__DOT__array_26081_0__DOT__dout_a,63,0);
    VL_SIG64(main_tb__DOT__main__DOT___main_i0__DOT__Datapath_i__DOT__array_26230_0__DOT__ARRAY_1D_STD_BRAM_NN_instance__DOT__din_value_aggregated,63,0);
    VL_SIG64(main_tb__DOT__main__DOT___main_i0__DOT__Datapath_i__DOT__array_26230_0__DOT__ARRAY_1D_STD_BRAM_NN_instance__DOT__dout_a,63,0);
    VL_SIG64(main_tb__DOT__main__DOT___main_i0__DOT__Datapath_i__DOT__array_26263_0__DOT__ARRAY_1D_STD_BRAM_NN_instance__DOT__din_value_aggregated,63,0);
    VL_SIG64(main_tb__DOT__main__DOT___main_i0__DOT__Datapath_i__DOT__array_26263_0__DOT__ARRAY_1D_STD_BRAM_NN_instance__DOT__dout_a,63,0);
    VL_SIG64(main_tb__DOT__main__DOT___main_i0__DOT__Datapath_i__DOT__reg_55__DOT__reg_out1,63,0);
    VL_SIG64(main_tb__DOT__main__DOT___main_i0__DOT__Datapath_i__DOT__reg_59__DOT__reg_out1,63,0);
    VL_SIG8(main_tb__DOT___bambu_testbench_mem_[1],7,0);
    VL_SIG(main_tb__DOT__main__DOT___main_i0__DOT__Datapath_i__DOT__array_26081_0__DOT__memory[44],31,0);
    VL_SIG(main_tb__DOT__main__DOT___main_i0__DOT__Datapath_i__DOT__array_26083_0__DOT__memory[1],31,0);
    VL_SIG(main_tb__DOT__main__DOT___main_i0__DOT__Datapath_i__DOT__array_26230_0__DOT__ARRAY_1D_STD_BRAM_NN_instance__DOT__memory[64],31,0);
    VL_SIG(main_tb__DOT__main__DOT___main_i0__DOT__Datapath_i__DOT__array_26263_0__DOT__ARRAY_1D_STD_BRAM_NN_instance__DOT__memory[32],31,0);
    
    // LOCAL VARIABLES
    // Internals; generally not touched by application code
    VL_SIG8(main_tb__DOT____Vlvbound2,7,0);
    VL_SIG8(main_tb__DOT__main__DOT___main_i0__DOT__Datapath_i__DOT____Vcellinp__array_26230_0__sel_STORE,1,0);
    VL_SIG8(main_tb__DOT__main__DOT___main_i0__DOT__Datapath_i__DOT____Vcellinp__array_26263_0__sel_STORE,1,0);
    VL_SIG8(__Vclklast__TOP__clock,0,0);
    VL_SIG(main_tb__DOT__main__DOT___main_i0__DOT__Datapath_i__DOT____Vcellinp__array_26230_0__in2,19,0);
    VL_SIG(main_tb__DOT__main__DOT___main_i0__DOT__Datapath_i__DOT____Vcellinp__array_26263_0__in2,19,0);
    VL_SIG64(main_tb__DOT__main__DOT___main_i0__DOT__Datapath_i__DOT____Vcellout__array_26081_0__out1,63,0);
    VL_SIG64(main_tb__DOT__main__DOT___main_i0__DOT__Datapath_i__DOT____Vcellinp__array_26230_0__in1,63,0);
    VL_SIG64(main_tb__DOT__main__DOT___main_i0__DOT__Datapath_i__DOT____Vcellout__array_26230_0__out1,63,0);
    VL_SIG64(main_tb__DOT__main__DOT___main_i0__DOT__Datapath_i__DOT____Vcellinp__array_26263_0__in1,63,0);
    VL_SIG64(main_tb__DOT__main__DOT___main_i0__DOT__Datapath_i__DOT____Vcellout__array_26263_0__out1,63,0);
    
    // INTERNAL VARIABLES
    // Internals; generally not touched by application code
    Vmain_tb__Syms* __VlSymsp;  // Symbol table
    
    // PARAMETERS
    // Parameters marked /*verilator public*/ for use by application code
    
    // CONSTRUCTORS
  private:
    Vmain_tb& operator= (const Vmain_tb&);  ///< Copying not allowed
    Vmain_tb(const Vmain_tb&);  ///< Copying not allowed
  public:
    /// Construct the model; called by application code
    /// The special name  may be used to make a wrapper with a
    /// single model invisible WRT DPI scope names.
    Vmain_tb(const char* name="TOP");
    /// Destroy the model; called (often implicitly) by application code
    ~Vmain_tb();
    
    // API METHODS
    /// Evaluate the model.  Application must call when inputs change.
    void eval();
    /// Simulation complete, run final blocks.  Application must call on completion.
    void final();
    
    // INTERNAL METHODS
  private:
    static void _eval_initial_loop(Vmain_tb__Syms* __restrict vlSymsp);
  public:
    void __Vconfigure(Vmain_tb__Syms* symsp, bool first);
  private:
    static QData _change_request(Vmain_tb__Syms* __restrict vlSymsp);
    void _ctor_var_reset();
  public:
    static void _eval(Vmain_tb__Syms* __restrict vlSymsp);
  private:
#ifdef VL_DEBUG
    void _eval_debug_assertions();
#endif // VL_DEBUG
  public:
    static void _eval_initial(Vmain_tb__Syms* __restrict vlSymsp);
    static void _eval_settle(Vmain_tb__Syms* __restrict vlSymsp);
    static void _initial__TOP__1(Vmain_tb__Syms* __restrict vlSymsp);
    static void _sequent__TOP__2(Vmain_tb__Syms* __restrict vlSymsp);
    static void _sequent__TOP__3(Vmain_tb__Syms* __restrict vlSymsp);
    static void _settle__TOP__4(Vmain_tb__Syms* __restrict vlSymsp);
} VL_ATTR_ALIGNED(128);

#endif // guard

############################################################
## This file is generated automatically by Vivado HLS.
## Please DO NOT edit it.
## Copyright (C) 1986-2019 Xilinx, Inc. All Rights Reserved.
############################################################
open_project hls_macc
set_top hls_macc
add_files motion_return.c
open_solution "solution1"
set_part {xc7z020clg484-1}
create_clock -period 10 -name default
#source "./hls_macc/solution1/directives.tcl"
#csim_design
csynth_design
#cosim_design
export_design -format ip_catalog

############################################################
## This file is generated automatically by Vivado HLS.
## Please DO NOT edit it.
## Copyright (C) 1986-2019 Xilinx, Inc. All Rights Reserved.
############################################################
open_project waka
set_top hls_macc
add_files hls_macc.c
open_solution "solution1"
set_part {xc7z020clg484-1}
create_clock -period 10 -name default
#source "./waka/solution1/directives.tcl"
#csim_design
csynth_design
#cosim_design
export_design -format ip_catalog

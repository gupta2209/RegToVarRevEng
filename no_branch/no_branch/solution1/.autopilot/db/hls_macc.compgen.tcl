# This script segment is generated automatically by AutoPilot

# clear list
if {${::AESL::PGuard_autoexp_gen}} {
    cg_default_interface_gen_dc_begin
    cg_default_interface_gen_bundle_begin
    AESL_LIB_XILADAPTER::native_axis_begin
}

set axilite_register_dict [dict create]
# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 1 \
    name i1 \
    type other \
    dir I \
    reset_level 1 \
    sync_rst true \
    corename dc_i1 \
    op interface \
    ports { i1 { I 32 vector } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 2 \
    name i2 \
    type other \
    dir I \
    reset_level 1 \
    sync_rst true \
    corename dc_i2 \
    op interface \
    ports { i2 { I 32 vector } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 3 \
    name i3 \
    type other \
    dir I \
    reset_level 1 \
    sync_rst true \
    corename dc_i3 \
    op interface \
    ports { i3 { I 32 vector } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 4 \
    name i4 \
    type other \
    dir I \
    reset_level 1 \
    sync_rst true \
    corename dc_i4 \
    op interface \
    ports { i4 { I 32 vector } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 5 \
    name i5 \
    type other \
    dir I \
    reset_level 1 \
    sync_rst true \
    corename dc_i5 \
    op interface \
    ports { i5 { I 32 vector } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 6 \
    name i6 \
    type other \
    dir I \
    reset_level 1 \
    sync_rst true \
    corename dc_i6 \
    op interface \
    ports { i6 { I 32 vector } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 7 \
    name o1 \
    type other \
    dir O \
    reset_level 1 \
    sync_rst true \
    corename dc_o1 \
    op interface \
    ports { o1 { O 32 vector } o1_ap_vld { O 1 bit } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 8 \
    name o2 \
    type other \
    dir O \
    reset_level 1 \
    sync_rst true \
    corename dc_o2 \
    op interface \
    ports { o2 { O 32 vector } o2_ap_vld { O 1 bit } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 9 \
    name o3 \
    type other \
    dir O \
    reset_level 1 \
    sync_rst true \
    corename dc_o3 \
    op interface \
    ports { o3 { O 32 vector } o3_ap_vld { O 1 bit } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 10 \
    name o4 \
    type other \
    dir O \
    reset_level 1 \
    sync_rst true \
    corename dc_o4 \
    op interface \
    ports { o4 { O 32 vector } o4_ap_vld { O 1 bit } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 11 \
    name G1 \
    type other \
    dir I \
    reset_level 1 \
    sync_rst true \
    corename dc_G1 \
    op interface \
    ports { G1 { I 32 vector } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 12 \
    name G2 \
    type other \
    dir I \
    reset_level 1 \
    sync_rst true \
    corename dc_G2 \
    op interface \
    ports { G2 { I 32 vector } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 13 \
    name GG1 \
    type other \
    dir I \
    reset_level 1 \
    sync_rst true \
    corename dc_GG1 \
    op interface \
    ports { GG1 { I 32 vector } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 14 \
    name GG2 \
    type other \
    dir I \
    reset_level 1 \
    sync_rst true \
    corename dc_GG2 \
    op interface \
    ports { GG2 { I 32 vector } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 15 \
    name ap_return1 \
    type other \
    dir O \
    reset_level 1 \
    sync_rst true \
    corename dc_ap_return1 \
    op interface \
    ports { ap_return1 { O 32 vector } ap_return1_ap_vld { O 1 bit } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id -1 \
    name ap_ctrl \
    type ap_ctrl \
    reset_level 1 \
    sync_rst true \
    corename ap_ctrl \
    op interface \
    ports { ap_start { I 1 bit } ap_ready { O 1 bit } ap_done { O 1 bit } ap_idle { O 1 bit } } \
} "
}


# Adapter definition:
set PortName ap_clk
set DataWd 1 
if {${::AESL::PGuard_autoexp_gen}} {
if {[info proc cg_default_interface_gen_clock] == "cg_default_interface_gen_clock"} {
eval "cg_default_interface_gen_clock { \
    id -2 \
    name ${PortName} \
    reset_level 1 \
    sync_rst true \
    corename apif_ap_clk \
    data_wd ${DataWd} \
    op interface \
}"
} else {
puts "@W \[IMPL-113\] Cannot find bus interface model in the library. Ignored generation of bus interface for '${PortName}'"
}
}


# Adapter definition:
set PortName ap_rst
set DataWd 1 
if {${::AESL::PGuard_autoexp_gen}} {
if {[info proc cg_default_interface_gen_reset] == "cg_default_interface_gen_reset"} {
eval "cg_default_interface_gen_reset { \
    id -3 \
    name ${PortName} \
    reset_level 1 \
    sync_rst true \
    corename apif_ap_rst \
    data_wd ${DataWd} \
    op interface \
}"
} else {
puts "@W \[IMPL-114\] Cannot find bus interface model in the library. Ignored generation of bus interface for '${PortName}'"
}
}



# merge
if {${::AESL::PGuard_autoexp_gen}} {
    cg_default_interface_gen_dc_end
    cg_default_interface_gen_bundle_end
    AESL_LIB_XILADAPTER::native_axis_end
}



set moduleName hls_macc
set isTopModule 1
set isTaskLevelControl 1
set isCombinational 0
set isDatapathOnly 0
set isFreeRunPipelineModule 0
set isPipelined 0
set pipeline_type none
set FunctionProtocol ap_ctrl_hs
set isOneStateSeq 0
set ProfileFlag 0
set StallSigGenFlag 0
set isEnableWaveformDebug 1
set C_modelName {hls_macc}
set C_modelType { void 0 }
set C_modelArgList {
	{ i1 int 32 regular  }
	{ i2 int 32 regular  }
	{ i3 int 32 regular  }
	{ i4 int 32 regular  }
	{ i5 int 32 regular  }
	{ i6 int 32 regular  }
	{ o1 int 32 regular {pointer 1}  }
	{ o2 int 32 regular {pointer 1}  }
	{ o3 int 32 regular {pointer 1}  }
	{ o4 int 32 regular {pointer 1}  }
	{ G1 int 32 regular  }
	{ G2 int 32 regular  }
	{ G3 int 32 unused  }
	{ G4 int 32 unused  }
	{ GG1 int 32 regular  }
	{ GG2 int 32 regular  }
	{ ap_return1 int 32 regular {pointer 1}  }
}
set C_modelArgMapList {[ 
	{ "Name" : "i1", "interface" : "wire", "bitwidth" : 32, "direction" : "READONLY", "bitSlice":[{"low":0,"up":31,"cElement": [{"cName": "i1","cData": "int","bit_use": { "low": 0,"up": 31},"cArray": [{"low" : 0,"up" : 0,"step" : 0}]}]}]} , 
 	{ "Name" : "i2", "interface" : "wire", "bitwidth" : 32, "direction" : "READONLY", "bitSlice":[{"low":0,"up":31,"cElement": [{"cName": "i2","cData": "int","bit_use": { "low": 0,"up": 31},"cArray": [{"low" : 0,"up" : 0,"step" : 0}]}]}]} , 
 	{ "Name" : "i3", "interface" : "wire", "bitwidth" : 32, "direction" : "READONLY", "bitSlice":[{"low":0,"up":31,"cElement": [{"cName": "i3","cData": "int","bit_use": { "low": 0,"up": 31},"cArray": [{"low" : 0,"up" : 0,"step" : 0}]}]}]} , 
 	{ "Name" : "i4", "interface" : "wire", "bitwidth" : 32, "direction" : "READONLY", "bitSlice":[{"low":0,"up":31,"cElement": [{"cName": "i4","cData": "int","bit_use": { "low": 0,"up": 31},"cArray": [{"low" : 0,"up" : 0,"step" : 0}]}]}]} , 
 	{ "Name" : "i5", "interface" : "wire", "bitwidth" : 32, "direction" : "READONLY", "bitSlice":[{"low":0,"up":31,"cElement": [{"cName": "i5","cData": "int","bit_use": { "low": 0,"up": 31},"cArray": [{"low" : 0,"up" : 0,"step" : 0}]}]}]} , 
 	{ "Name" : "i6", "interface" : "wire", "bitwidth" : 32, "direction" : "READONLY", "bitSlice":[{"low":0,"up":31,"cElement": [{"cName": "i6","cData": "int","bit_use": { "low": 0,"up": 31},"cArray": [{"low" : 0,"up" : 0,"step" : 0}]}]}]} , 
 	{ "Name" : "o1", "interface" : "wire", "bitwidth" : 32, "direction" : "WRITEONLY", "bitSlice":[{"low":0,"up":31,"cElement": [{"cName": "o1","cData": "int","bit_use": { "low": 0,"up": 31},"cArray": [{"low" : 0,"up" : 0,"step" : 1}]}]}]} , 
 	{ "Name" : "o2", "interface" : "wire", "bitwidth" : 32, "direction" : "WRITEONLY", "bitSlice":[{"low":0,"up":31,"cElement": [{"cName": "o2","cData": "int","bit_use": { "low": 0,"up": 31},"cArray": [{"low" : 0,"up" : 0,"step" : 1}]}]}]} , 
 	{ "Name" : "o3", "interface" : "wire", "bitwidth" : 32, "direction" : "WRITEONLY", "bitSlice":[{"low":0,"up":31,"cElement": [{"cName": "o3","cData": "int","bit_use": { "low": 0,"up": 31},"cArray": [{"low" : 0,"up" : 0,"step" : 1}]}]}]} , 
 	{ "Name" : "o4", "interface" : "wire", "bitwidth" : 32, "direction" : "WRITEONLY", "bitSlice":[{"low":0,"up":31,"cElement": [{"cName": "o4","cData": "int","bit_use": { "low": 0,"up": 31},"cArray": [{"low" : 0,"up" : 0,"step" : 1}]}]}]} , 
 	{ "Name" : "G1", "interface" : "wire", "bitwidth" : 32, "direction" : "READONLY", "bitSlice":[{"low":0,"up":31,"cElement": [{"cName": "G1","cData": "int","bit_use": { "low": 0,"up": 31},"cArray": [{"low" : 0,"up" : 0,"step" : 0}]}]}]} , 
 	{ "Name" : "G2", "interface" : "wire", "bitwidth" : 32, "direction" : "READONLY", "bitSlice":[{"low":0,"up":31,"cElement": [{"cName": "G2","cData": "int","bit_use": { "low": 0,"up": 31},"cArray": [{"low" : 0,"up" : 0,"step" : 0}]}]}]} , 
 	{ "Name" : "G3", "interface" : "wire", "bitwidth" : 32, "direction" : "READONLY", "bitSlice":[{"low":0,"up":31,"cElement": [{"cName": "G3","cData": "int","bit_use": { "low": 0,"up": 31},"cArray": [{"low" : 0,"up" : 0,"step" : 0}]}]}]} , 
 	{ "Name" : "G4", "interface" : "wire", "bitwidth" : 32, "direction" : "READONLY", "bitSlice":[{"low":0,"up":31,"cElement": [{"cName": "G4","cData": "int","bit_use": { "low": 0,"up": 31},"cArray": [{"low" : 0,"up" : 0,"step" : 0}]}]}]} , 
 	{ "Name" : "GG1", "interface" : "wire", "bitwidth" : 32, "direction" : "READONLY", "bitSlice":[{"low":0,"up":31,"cElement": [{"cName": "GG1","cData": "int","bit_use": { "low": 0,"up": 31},"cArray": [{"low" : 0,"up" : 0,"step" : 0}]}]}]} , 
 	{ "Name" : "GG2", "interface" : "wire", "bitwidth" : 32, "direction" : "READONLY", "bitSlice":[{"low":0,"up":31,"cElement": [{"cName": "GG2","cData": "int","bit_use": { "low": 0,"up": 31},"cArray": [{"low" : 0,"up" : 0,"step" : 0}]}]}]} , 
 	{ "Name" : "ap_return1", "interface" : "wire", "bitwidth" : 32, "direction" : "WRITEONLY", "bitSlice":[{"low":0,"up":31,"cElement": [{"cName": "ap_return1","cData": "int","bit_use": { "low": 0,"up": 31},"cArray": [{"low" : 0,"up" : 0,"step" : 1}]}]}]} ]}
# RTL Port declarations: 
set portNum 28
set portList { 
	{ ap_clk sc_in sc_logic 1 clock -1 } 
	{ ap_rst sc_in sc_logic 1 reset -1 active_high_sync } 
	{ ap_start sc_in sc_logic 1 start -1 } 
	{ ap_done sc_out sc_logic 1 predone -1 } 
	{ ap_idle sc_out sc_logic 1 done -1 } 
	{ ap_ready sc_out sc_logic 1 ready -1 } 
	{ i1 sc_in sc_lv 32 signal 0 } 
	{ i2 sc_in sc_lv 32 signal 1 } 
	{ i3 sc_in sc_lv 32 signal 2 } 
	{ i4 sc_in sc_lv 32 signal 3 } 
	{ i5 sc_in sc_lv 32 signal 4 } 
	{ i6 sc_in sc_lv 32 signal 5 } 
	{ o1 sc_out sc_lv 32 signal 6 } 
	{ o1_ap_vld sc_out sc_logic 1 outvld 6 } 
	{ o2 sc_out sc_lv 32 signal 7 } 
	{ o2_ap_vld sc_out sc_logic 1 outvld 7 } 
	{ o3 sc_out sc_lv 32 signal 8 } 
	{ o3_ap_vld sc_out sc_logic 1 outvld 8 } 
	{ o4 sc_out sc_lv 32 signal 9 } 
	{ o4_ap_vld sc_out sc_logic 1 outvld 9 } 
	{ G1 sc_in sc_lv 32 signal 10 } 
	{ G2 sc_in sc_lv 32 signal 11 } 
	{ G3 sc_in sc_lv 32 signal 12 } 
	{ G4 sc_in sc_lv 32 signal 13 } 
	{ GG1 sc_in sc_lv 32 signal 14 } 
	{ GG2 sc_in sc_lv 32 signal 15 } 
	{ ap_return1 sc_out sc_lv 32 signal 16 } 
	{ ap_return1_ap_vld sc_out sc_logic 1 outvld 16 } 
}
set NewPortList {[ 
	{ "name": "ap_clk", "direction": "in", "datatype": "sc_logic", "bitwidth":1, "type": "clock", "bundle":{"name": "ap_clk", "role": "default" }} , 
 	{ "name": "ap_rst", "direction": "in", "datatype": "sc_logic", "bitwidth":1, "type": "reset", "bundle":{"name": "ap_rst", "role": "default" }} , 
 	{ "name": "ap_start", "direction": "in", "datatype": "sc_logic", "bitwidth":1, "type": "start", "bundle":{"name": "ap_start", "role": "default" }} , 
 	{ "name": "ap_done", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "predone", "bundle":{"name": "ap_done", "role": "default" }} , 
 	{ "name": "ap_idle", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "done", "bundle":{"name": "ap_idle", "role": "default" }} , 
 	{ "name": "ap_ready", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "ready", "bundle":{"name": "ap_ready", "role": "default" }} , 
 	{ "name": "i1", "direction": "in", "datatype": "sc_lv", "bitwidth":32, "type": "signal", "bundle":{"name": "i1", "role": "default" }} , 
 	{ "name": "i2", "direction": "in", "datatype": "sc_lv", "bitwidth":32, "type": "signal", "bundle":{"name": "i2", "role": "default" }} , 
 	{ "name": "i3", "direction": "in", "datatype": "sc_lv", "bitwidth":32, "type": "signal", "bundle":{"name": "i3", "role": "default" }} , 
 	{ "name": "i4", "direction": "in", "datatype": "sc_lv", "bitwidth":32, "type": "signal", "bundle":{"name": "i4", "role": "default" }} , 
 	{ "name": "i5", "direction": "in", "datatype": "sc_lv", "bitwidth":32, "type": "signal", "bundle":{"name": "i5", "role": "default" }} , 
 	{ "name": "i6", "direction": "in", "datatype": "sc_lv", "bitwidth":32, "type": "signal", "bundle":{"name": "i6", "role": "default" }} , 
 	{ "name": "o1", "direction": "out", "datatype": "sc_lv", "bitwidth":32, "type": "signal", "bundle":{"name": "o1", "role": "default" }} , 
 	{ "name": "o1_ap_vld", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "outvld", "bundle":{"name": "o1", "role": "ap_vld" }} , 
 	{ "name": "o2", "direction": "out", "datatype": "sc_lv", "bitwidth":32, "type": "signal", "bundle":{"name": "o2", "role": "default" }} , 
 	{ "name": "o2_ap_vld", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "outvld", "bundle":{"name": "o2", "role": "ap_vld" }} , 
 	{ "name": "o3", "direction": "out", "datatype": "sc_lv", "bitwidth":32, "type": "signal", "bundle":{"name": "o3", "role": "default" }} , 
 	{ "name": "o3_ap_vld", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "outvld", "bundle":{"name": "o3", "role": "ap_vld" }} , 
 	{ "name": "o4", "direction": "out", "datatype": "sc_lv", "bitwidth":32, "type": "signal", "bundle":{"name": "o4", "role": "default" }} , 
 	{ "name": "o4_ap_vld", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "outvld", "bundle":{"name": "o4", "role": "ap_vld" }} , 
 	{ "name": "G1", "direction": "in", "datatype": "sc_lv", "bitwidth":32, "type": "signal", "bundle":{"name": "G1", "role": "default" }} , 
 	{ "name": "G2", "direction": "in", "datatype": "sc_lv", "bitwidth":32, "type": "signal", "bundle":{"name": "G2", "role": "default" }} , 
 	{ "name": "G3", "direction": "in", "datatype": "sc_lv", "bitwidth":32, "type": "signal", "bundle":{"name": "G3", "role": "default" }} , 
 	{ "name": "G4", "direction": "in", "datatype": "sc_lv", "bitwidth":32, "type": "signal", "bundle":{"name": "G4", "role": "default" }} , 
 	{ "name": "GG1", "direction": "in", "datatype": "sc_lv", "bitwidth":32, "type": "signal", "bundle":{"name": "GG1", "role": "default" }} , 
 	{ "name": "GG2", "direction": "in", "datatype": "sc_lv", "bitwidth":32, "type": "signal", "bundle":{"name": "GG2", "role": "default" }} , 
 	{ "name": "ap_return1", "direction": "out", "datatype": "sc_lv", "bitwidth":32, "type": "signal", "bundle":{"name": "ap_return1", "role": "default" }} , 
 	{ "name": "ap_return1_ap_vld", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "outvld", "bundle":{"name": "ap_return1", "role": "ap_vld" }}  ]}

set RtlHierarchyInfo {[
	{"ID" : "0", "Level" : "0", "Path" : "`AUTOTB_DUT_INST", "Parent" : "",
		"CDFG" : "hls_macc",
		"Protocol" : "ap_ctrl_hs",
		"ControlExist" : "1", "ap_start" : "1", "ap_ready" : "1", "ap_done" : "1", "ap_continue" : "0", "ap_idle" : "1",
		"Pipeline" : "None", "UnalignedPipeline" : "0", "RewindPipeline" : "0", "ProcessNetwork" : "0",
		"II" : "0",
		"VariableLatency" : "1", "ExactLatency" : "-1", "EstimateLatencyMin" : "6", "EstimateLatencyMax" : "6",
		"Combinational" : "0",
		"Datapath" : "0",
		"ClockEnable" : "0",
		"HasSubDataflow" : "0",
		"InDataflowNetwork" : "0",
		"HasNonBlockingOperation" : "0",
		"Port" : [
			{"Name" : "i1", "Type" : "None", "Direction" : "I"},
			{"Name" : "i2", "Type" : "None", "Direction" : "I"},
			{"Name" : "i3", "Type" : "None", "Direction" : "I"},
			{"Name" : "i4", "Type" : "None", "Direction" : "I"},
			{"Name" : "i5", "Type" : "None", "Direction" : "I"},
			{"Name" : "i6", "Type" : "None", "Direction" : "I"},
			{"Name" : "o1", "Type" : "Vld", "Direction" : "O"},
			{"Name" : "o2", "Type" : "Vld", "Direction" : "O"},
			{"Name" : "o3", "Type" : "Vld", "Direction" : "O"},
			{"Name" : "o4", "Type" : "Vld", "Direction" : "O"},
			{"Name" : "G1", "Type" : "None", "Direction" : "I"},
			{"Name" : "G2", "Type" : "None", "Direction" : "I"},
			{"Name" : "G3", "Type" : "None", "Direction" : "I"},
			{"Name" : "G4", "Type" : "None", "Direction" : "I"},
			{"Name" : "GG1", "Type" : "None", "Direction" : "I"},
			{"Name" : "GG2", "Type" : "None", "Direction" : "I"},
			{"Name" : "ap_return1", "Type" : "Vld", "Direction" : "O"}]}]}


set ArgLastReadFirstWriteLatency {
	hls_macc {
		i1 {Type I LastRead 4 FirstWrite -1}
		i2 {Type I LastRead 4 FirstWrite -1}
		i3 {Type I LastRead 0 FirstWrite -1}
		i4 {Type I LastRead 0 FirstWrite -1}
		i5 {Type I LastRead 1 FirstWrite -1}
		i6 {Type I LastRead 1 FirstWrite -1}
		o1 {Type O LastRead -1 FirstWrite 6}
		o2 {Type O LastRead -1 FirstWrite 6}
		o3 {Type O LastRead -1 FirstWrite 6}
		o4 {Type O LastRead -1 FirstWrite 6}
		G1 {Type I LastRead 0 FirstWrite -1}
		G2 {Type I LastRead 0 FirstWrite -1}
		G3 {Type I LastRead -1 FirstWrite -1}
		G4 {Type I LastRead -1 FirstWrite -1}
		GG1 {Type I LastRead 4 FirstWrite -1}
		GG2 {Type I LastRead 4 FirstWrite -1}
		ap_return1 {Type O LastRead -1 FirstWrite 6}}}

set hasDtUnsupportedChannel 0

set PerformanceInfo {[
	{"Name" : "Latency", "Min" : "6", "Max" : "6"}
	, {"Name" : "Interval", "Min" : "7", "Max" : "7"}
]}

set PipelineEnableSignalInfo {[
]}

set Spec2ImplPortList { 
	i1 { ap_none {  { i1 in_data 0 32 } } }
	i2 { ap_none {  { i2 in_data 0 32 } } }
	i3 { ap_none {  { i3 in_data 0 32 } } }
	i4 { ap_none {  { i4 in_data 0 32 } } }
	i5 { ap_none {  { i5 in_data 0 32 } } }
	i6 { ap_none {  { i6 in_data 0 32 } } }
	o1 { ap_vld {  { o1 out_data 1 32 }  { o1_ap_vld out_vld 1 1 } } }
	o2 { ap_vld {  { o2 out_data 1 32 }  { o2_ap_vld out_vld 1 1 } } }
	o3 { ap_vld {  { o3 out_data 1 32 }  { o3_ap_vld out_vld 1 1 } } }
	o4 { ap_vld {  { o4 out_data 1 32 }  { o4_ap_vld out_vld 1 1 } } }
	G1 { ap_none {  { G1 in_data 0 32 } } }
	G2 { ap_none {  { G2 in_data 0 32 } } }
	G3 { ap_none {  { G3 in_data 0 32 } } }
	G4 { ap_none {  { G4 in_data 0 32 } } }
	GG1 { ap_none {  { GG1 in_data 0 32 } } }
	GG2 { ap_none {  { GG2 in_data 0 32 } } }
	ap_return1 { ap_vld {  { ap_return1 out_data 1 32 }  { ap_return1_ap_vld out_vld 1 1 } } }
}

set busDeadlockParameterList { 
}

# RTL port scheduling information:
set fifoSchedulingInfoList { 
}

# RTL bus port read request latency information:
set busReadReqLatencyList { 
}

# RTL bus port write response latency information:
set busWriteResLatencyList { 
}

# RTL array port load latency information:
set memoryLoadLatencyList { 
}

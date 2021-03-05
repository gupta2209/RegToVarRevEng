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
set C_modelType { int 32 }
set C_modelArgList {
	{ in1 int 32 regular  }
	{ in2 int 32 regular  }
	{ in3 int 32 regular  }
	{ in4 int 32 regular  }
	{ in7 int 32 regular  }
	{ in8 int 32 regular  }
	{ in9 int 32 regular  }
	{ in10 int 32 regular  }
	{ in14 int 32 regular  }
	{ in12 int 32 regular  }
	{ in15 int 32 regular  }
	{ in17 int 32 regular  }
	{ in19 int 32 regular  }
	{ in20 int 32 regular  }
	{ in22 int 32 regular  }
	{ in24 int 32 regular  }
	{ in27 int 32 regular  }
	{ in28 int 32 regular  }
	{ in29 int 32 regular  }
	{ in32 int 32 regular  }
	{ out13 int 32 regular {pointer 1}  }
	{ out30 int 32 regular {pointer 2}  }
	{ out31 int 32 regular {pointer 1}  }
}
set C_modelArgMapList {[ 
	{ "Name" : "in1", "interface" : "wire", "bitwidth" : 32, "direction" : "READONLY", "bitSlice":[{"low":0,"up":31,"cElement": [{"cName": "in1","cData": "int","bit_use": { "low": 0,"up": 31},"cArray": [{"low" : 0,"up" : 0,"step" : 0}]}]}]} , 
 	{ "Name" : "in2", "interface" : "wire", "bitwidth" : 32, "direction" : "READONLY", "bitSlice":[{"low":0,"up":31,"cElement": [{"cName": "in2","cData": "int","bit_use": { "low": 0,"up": 31},"cArray": [{"low" : 0,"up" : 0,"step" : 0}]}]}]} , 
 	{ "Name" : "in3", "interface" : "wire", "bitwidth" : 32, "direction" : "READONLY", "bitSlice":[{"low":0,"up":31,"cElement": [{"cName": "in3","cData": "int","bit_use": { "low": 0,"up": 31},"cArray": [{"low" : 0,"up" : 0,"step" : 0}]}]}]} , 
 	{ "Name" : "in4", "interface" : "wire", "bitwidth" : 32, "direction" : "READONLY", "bitSlice":[{"low":0,"up":31,"cElement": [{"cName": "in4","cData": "int","bit_use": { "low": 0,"up": 31},"cArray": [{"low" : 0,"up" : 0,"step" : 0}]}]}]} , 
 	{ "Name" : "in7", "interface" : "wire", "bitwidth" : 32, "direction" : "READONLY", "bitSlice":[{"low":0,"up":31,"cElement": [{"cName": "in7","cData": "int","bit_use": { "low": 0,"up": 31},"cArray": [{"low" : 0,"up" : 0,"step" : 0}]}]}]} , 
 	{ "Name" : "in8", "interface" : "wire", "bitwidth" : 32, "direction" : "READONLY", "bitSlice":[{"low":0,"up":31,"cElement": [{"cName": "in8","cData": "int","bit_use": { "low": 0,"up": 31},"cArray": [{"low" : 0,"up" : 0,"step" : 0}]}]}]} , 
 	{ "Name" : "in9", "interface" : "wire", "bitwidth" : 32, "direction" : "READONLY", "bitSlice":[{"low":0,"up":31,"cElement": [{"cName": "in9","cData": "int","bit_use": { "low": 0,"up": 31},"cArray": [{"low" : 0,"up" : 0,"step" : 0}]}]}]} , 
 	{ "Name" : "in10", "interface" : "wire", "bitwidth" : 32, "direction" : "READONLY", "bitSlice":[{"low":0,"up":31,"cElement": [{"cName": "in10","cData": "int","bit_use": { "low": 0,"up": 31},"cArray": [{"low" : 0,"up" : 0,"step" : 0}]}]}]} , 
 	{ "Name" : "in14", "interface" : "wire", "bitwidth" : 32, "direction" : "READONLY", "bitSlice":[{"low":0,"up":31,"cElement": [{"cName": "in14","cData": "int","bit_use": { "low": 0,"up": 31},"cArray": [{"low" : 0,"up" : 0,"step" : 0}]}]}]} , 
 	{ "Name" : "in12", "interface" : "wire", "bitwidth" : 32, "direction" : "READONLY", "bitSlice":[{"low":0,"up":31,"cElement": [{"cName": "in12","cData": "int","bit_use": { "low": 0,"up": 31},"cArray": [{"low" : 0,"up" : 0,"step" : 0}]}]}]} , 
 	{ "Name" : "in15", "interface" : "wire", "bitwidth" : 32, "direction" : "READONLY", "bitSlice":[{"low":0,"up":31,"cElement": [{"cName": "in15","cData": "int","bit_use": { "low": 0,"up": 31},"cArray": [{"low" : 0,"up" : 0,"step" : 0}]}]}]} , 
 	{ "Name" : "in17", "interface" : "wire", "bitwidth" : 32, "direction" : "READONLY", "bitSlice":[{"low":0,"up":31,"cElement": [{"cName": "in17","cData": "int","bit_use": { "low": 0,"up": 31},"cArray": [{"low" : 0,"up" : 0,"step" : 0}]}]}]} , 
 	{ "Name" : "in19", "interface" : "wire", "bitwidth" : 32, "direction" : "READONLY", "bitSlice":[{"low":0,"up":31,"cElement": [{"cName": "in19","cData": "int","bit_use": { "low": 0,"up": 31},"cArray": [{"low" : 0,"up" : 0,"step" : 0}]}]}]} , 
 	{ "Name" : "in20", "interface" : "wire", "bitwidth" : 32, "direction" : "READONLY", "bitSlice":[{"low":0,"up":31,"cElement": [{"cName": "in20","cData": "int","bit_use": { "low": 0,"up": 31},"cArray": [{"low" : 0,"up" : 0,"step" : 0}]}]}]} , 
 	{ "Name" : "in22", "interface" : "wire", "bitwidth" : 32, "direction" : "READONLY", "bitSlice":[{"low":0,"up":31,"cElement": [{"cName": "in22","cData": "int","bit_use": { "low": 0,"up": 31},"cArray": [{"low" : 0,"up" : 0,"step" : 0}]}]}]} , 
 	{ "Name" : "in24", "interface" : "wire", "bitwidth" : 32, "direction" : "READONLY", "bitSlice":[{"low":0,"up":31,"cElement": [{"cName": "in24","cData": "int","bit_use": { "low": 0,"up": 31},"cArray": [{"low" : 0,"up" : 0,"step" : 0}]}]}]} , 
 	{ "Name" : "in27", "interface" : "wire", "bitwidth" : 32, "direction" : "READONLY", "bitSlice":[{"low":0,"up":31,"cElement": [{"cName": "in27","cData": "int","bit_use": { "low": 0,"up": 31},"cArray": [{"low" : 0,"up" : 0,"step" : 0}]}]}]} , 
 	{ "Name" : "in28", "interface" : "wire", "bitwidth" : 32, "direction" : "READONLY", "bitSlice":[{"low":0,"up":31,"cElement": [{"cName": "in28","cData": "int","bit_use": { "low": 0,"up": 31},"cArray": [{"low" : 0,"up" : 0,"step" : 0}]}]}]} , 
 	{ "Name" : "in29", "interface" : "wire", "bitwidth" : 32, "direction" : "READONLY", "bitSlice":[{"low":0,"up":31,"cElement": [{"cName": "in29","cData": "int","bit_use": { "low": 0,"up": 31},"cArray": [{"low" : 0,"up" : 0,"step" : 0}]}]}]} , 
 	{ "Name" : "in32", "interface" : "wire", "bitwidth" : 32, "direction" : "READONLY", "bitSlice":[{"low":0,"up":31,"cElement": [{"cName": "in32","cData": "int","bit_use": { "low": 0,"up": 31},"cArray": [{"low" : 0,"up" : 0,"step" : 0}]}]}]} , 
 	{ "Name" : "out13", "interface" : "wire", "bitwidth" : 32, "direction" : "WRITEONLY", "bitSlice":[{"low":0,"up":31,"cElement": [{"cName": "out13","cData": "int","bit_use": { "low": 0,"up": 31},"cArray": [{"low" : 0,"up" : 0,"step" : 1}]}]}]} , 
 	{ "Name" : "out30", "interface" : "wire", "bitwidth" : 32, "direction" : "READWRITE", "bitSlice":[{"low":0,"up":31,"cElement": [{"cName": "out30","cData": "int","bit_use": { "low": 0,"up": 31},"cArray": [{"low" : 0,"up" : 0,"step" : 1}]}]}]} , 
 	{ "Name" : "out31", "interface" : "wire", "bitwidth" : 32, "direction" : "WRITEONLY", "bitSlice":[{"low":0,"up":31,"cElement": [{"cName": "out31","cData": "int","bit_use": { "low": 0,"up": 31},"cArray": [{"low" : 0,"up" : 0,"step" : 1}]}]}]} , 
 	{ "Name" : "ap_return", "interface" : "wire", "bitwidth" : 32,"bitSlice":[{"low":0,"up":31,"cElement": [{"cName": "return","cData": "int","bit_use": { "low": 0,"up": 31},"cArray": [{"low" : 0,"up" : 1,"step" : 0}]}]}]} ]}
# RTL Port declarations: 
set portNum 34
set portList { 
	{ ap_clk sc_in sc_logic 1 clock -1 } 
	{ ap_rst sc_in sc_logic 1 reset -1 active_high_sync } 
	{ ap_start sc_in sc_logic 1 start -1 } 
	{ ap_done sc_out sc_logic 1 predone -1 } 
	{ ap_idle sc_out sc_logic 1 done -1 } 
	{ ap_ready sc_out sc_logic 1 ready -1 } 
	{ in1 sc_in sc_lv 32 signal 0 } 
	{ in2 sc_in sc_lv 32 signal 1 } 
	{ in3 sc_in sc_lv 32 signal 2 } 
	{ in4 sc_in sc_lv 32 signal 3 } 
	{ in7 sc_in sc_lv 32 signal 4 } 
	{ in8 sc_in sc_lv 32 signal 5 } 
	{ in9 sc_in sc_lv 32 signal 6 } 
	{ in10 sc_in sc_lv 32 signal 7 } 
	{ in14 sc_in sc_lv 32 signal 8 } 
	{ in12 sc_in sc_lv 32 signal 9 } 
	{ in15 sc_in sc_lv 32 signal 10 } 
	{ in17 sc_in sc_lv 32 signal 11 } 
	{ in19 sc_in sc_lv 32 signal 12 } 
	{ in20 sc_in sc_lv 32 signal 13 } 
	{ in22 sc_in sc_lv 32 signal 14 } 
	{ in24 sc_in sc_lv 32 signal 15 } 
	{ in27 sc_in sc_lv 32 signal 16 } 
	{ in28 sc_in sc_lv 32 signal 17 } 
	{ in29 sc_in sc_lv 32 signal 18 } 
	{ in32 sc_in sc_lv 32 signal 19 } 
	{ out13 sc_out sc_lv 32 signal 20 } 
	{ out13_ap_vld sc_out sc_logic 1 outvld 20 } 
	{ out30_i sc_in sc_lv 32 signal 21 } 
	{ out30_o sc_out sc_lv 32 signal 21 } 
	{ out30_o_ap_vld sc_out sc_logic 1 outvld 21 } 
	{ out31 sc_out sc_lv 32 signal 22 } 
	{ out31_ap_vld sc_out sc_logic 1 outvld 22 } 
	{ ap_return sc_out sc_lv 32 signal -1 } 
}
set NewPortList {[ 
	{ "name": "ap_clk", "direction": "in", "datatype": "sc_logic", "bitwidth":1, "type": "clock", "bundle":{"name": "ap_clk", "role": "default" }} , 
 	{ "name": "ap_rst", "direction": "in", "datatype": "sc_logic", "bitwidth":1, "type": "reset", "bundle":{"name": "ap_rst", "role": "default" }} , 
 	{ "name": "ap_start", "direction": "in", "datatype": "sc_logic", "bitwidth":1, "type": "start", "bundle":{"name": "ap_start", "role": "default" }} , 
 	{ "name": "ap_done", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "predone", "bundle":{"name": "ap_done", "role": "default" }} , 
 	{ "name": "ap_idle", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "done", "bundle":{"name": "ap_idle", "role": "default" }} , 
 	{ "name": "ap_ready", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "ready", "bundle":{"name": "ap_ready", "role": "default" }} , 
 	{ "name": "in1", "direction": "in", "datatype": "sc_lv", "bitwidth":32, "type": "signal", "bundle":{"name": "in1", "role": "default" }} , 
 	{ "name": "in2", "direction": "in", "datatype": "sc_lv", "bitwidth":32, "type": "signal", "bundle":{"name": "in2", "role": "default" }} , 
 	{ "name": "in3", "direction": "in", "datatype": "sc_lv", "bitwidth":32, "type": "signal", "bundle":{"name": "in3", "role": "default" }} , 
 	{ "name": "in4", "direction": "in", "datatype": "sc_lv", "bitwidth":32, "type": "signal", "bundle":{"name": "in4", "role": "default" }} , 
 	{ "name": "in7", "direction": "in", "datatype": "sc_lv", "bitwidth":32, "type": "signal", "bundle":{"name": "in7", "role": "default" }} , 
 	{ "name": "in8", "direction": "in", "datatype": "sc_lv", "bitwidth":32, "type": "signal", "bundle":{"name": "in8", "role": "default" }} , 
 	{ "name": "in9", "direction": "in", "datatype": "sc_lv", "bitwidth":32, "type": "signal", "bundle":{"name": "in9", "role": "default" }} , 
 	{ "name": "in10", "direction": "in", "datatype": "sc_lv", "bitwidth":32, "type": "signal", "bundle":{"name": "in10", "role": "default" }} , 
 	{ "name": "in14", "direction": "in", "datatype": "sc_lv", "bitwidth":32, "type": "signal", "bundle":{"name": "in14", "role": "default" }} , 
 	{ "name": "in12", "direction": "in", "datatype": "sc_lv", "bitwidth":32, "type": "signal", "bundle":{"name": "in12", "role": "default" }} , 
 	{ "name": "in15", "direction": "in", "datatype": "sc_lv", "bitwidth":32, "type": "signal", "bundle":{"name": "in15", "role": "default" }} , 
 	{ "name": "in17", "direction": "in", "datatype": "sc_lv", "bitwidth":32, "type": "signal", "bundle":{"name": "in17", "role": "default" }} , 
 	{ "name": "in19", "direction": "in", "datatype": "sc_lv", "bitwidth":32, "type": "signal", "bundle":{"name": "in19", "role": "default" }} , 
 	{ "name": "in20", "direction": "in", "datatype": "sc_lv", "bitwidth":32, "type": "signal", "bundle":{"name": "in20", "role": "default" }} , 
 	{ "name": "in22", "direction": "in", "datatype": "sc_lv", "bitwidth":32, "type": "signal", "bundle":{"name": "in22", "role": "default" }} , 
 	{ "name": "in24", "direction": "in", "datatype": "sc_lv", "bitwidth":32, "type": "signal", "bundle":{"name": "in24", "role": "default" }} , 
 	{ "name": "in27", "direction": "in", "datatype": "sc_lv", "bitwidth":32, "type": "signal", "bundle":{"name": "in27", "role": "default" }} , 
 	{ "name": "in28", "direction": "in", "datatype": "sc_lv", "bitwidth":32, "type": "signal", "bundle":{"name": "in28", "role": "default" }} , 
 	{ "name": "in29", "direction": "in", "datatype": "sc_lv", "bitwidth":32, "type": "signal", "bundle":{"name": "in29", "role": "default" }} , 
 	{ "name": "in32", "direction": "in", "datatype": "sc_lv", "bitwidth":32, "type": "signal", "bundle":{"name": "in32", "role": "default" }} , 
 	{ "name": "out13", "direction": "out", "datatype": "sc_lv", "bitwidth":32, "type": "signal", "bundle":{"name": "out13", "role": "default" }} , 
 	{ "name": "out13_ap_vld", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "outvld", "bundle":{"name": "out13", "role": "ap_vld" }} , 
 	{ "name": "out30_i", "direction": "in", "datatype": "sc_lv", "bitwidth":32, "type": "signal", "bundle":{"name": "out30", "role": "i" }} , 
 	{ "name": "out30_o", "direction": "out", "datatype": "sc_lv", "bitwidth":32, "type": "signal", "bundle":{"name": "out30", "role": "o" }} , 
 	{ "name": "out30_o_ap_vld", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "outvld", "bundle":{"name": "out30", "role": "o_ap_vld" }} , 
 	{ "name": "out31", "direction": "out", "datatype": "sc_lv", "bitwidth":32, "type": "signal", "bundle":{"name": "out31", "role": "default" }} , 
 	{ "name": "out31_ap_vld", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "outvld", "bundle":{"name": "out31", "role": "ap_vld" }} , 
 	{ "name": "ap_return", "direction": "out", "datatype": "sc_lv", "bitwidth":32, "type": "signal", "bundle":{"name": "ap_return", "role": "default" }}  ]}

set RtlHierarchyInfo {[
	{"ID" : "0", "Level" : "0", "Path" : "`AUTOTB_DUT_INST", "Parent" : "",
		"CDFG" : "hls_macc",
		"Protocol" : "ap_ctrl_hs",
		"ControlExist" : "1", "ap_start" : "1", "ap_ready" : "1", "ap_done" : "1", "ap_continue" : "0", "ap_idle" : "1",
		"Pipeline" : "None", "UnalignedPipeline" : "0", "RewindPipeline" : "0", "ProcessNetwork" : "0",
		"II" : "0",
		"VariableLatency" : "1", "ExactLatency" : "-1", "EstimateLatencyMin" : "1", "EstimateLatencyMax" : "2",
		"Combinational" : "0",
		"Datapath" : "0",
		"ClockEnable" : "0",
		"HasSubDataflow" : "0",
		"InDataflowNetwork" : "0",
		"HasNonBlockingOperation" : "0",
		"Port" : [
			{"Name" : "in1", "Type" : "None", "Direction" : "I"},
			{"Name" : "in2", "Type" : "None", "Direction" : "I"},
			{"Name" : "in3", "Type" : "None", "Direction" : "I"},
			{"Name" : "in4", "Type" : "None", "Direction" : "I"},
			{"Name" : "in7", "Type" : "None", "Direction" : "I"},
			{"Name" : "in8", "Type" : "None", "Direction" : "I"},
			{"Name" : "in9", "Type" : "None", "Direction" : "I"},
			{"Name" : "in10", "Type" : "None", "Direction" : "I"},
			{"Name" : "in14", "Type" : "None", "Direction" : "I"},
			{"Name" : "in12", "Type" : "None", "Direction" : "I"},
			{"Name" : "in15", "Type" : "None", "Direction" : "I"},
			{"Name" : "in17", "Type" : "None", "Direction" : "I"},
			{"Name" : "in19", "Type" : "None", "Direction" : "I"},
			{"Name" : "in20", "Type" : "None", "Direction" : "I"},
			{"Name" : "in22", "Type" : "None", "Direction" : "I"},
			{"Name" : "in24", "Type" : "None", "Direction" : "I"},
			{"Name" : "in27", "Type" : "None", "Direction" : "I"},
			{"Name" : "in28", "Type" : "None", "Direction" : "I"},
			{"Name" : "in29", "Type" : "None", "Direction" : "I"},
			{"Name" : "in32", "Type" : "None", "Direction" : "I"},
			{"Name" : "out13", "Type" : "Vld", "Direction" : "O"},
			{"Name" : "out30", "Type" : "OVld", "Direction" : "IO"},
			{"Name" : "out31", "Type" : "Vld", "Direction" : "O"}]}]}


set ArgLastReadFirstWriteLatency {
	hls_macc {
		in1 {Type I LastRead 0 FirstWrite -1}
		in2 {Type I LastRead 0 FirstWrite -1}
		in3 {Type I LastRead 0 FirstWrite -1}
		in4 {Type I LastRead 0 FirstWrite -1}
		in7 {Type I LastRead 0 FirstWrite -1}
		in8 {Type I LastRead 0 FirstWrite -1}
		in9 {Type I LastRead 0 FirstWrite -1}
		in10 {Type I LastRead 0 FirstWrite -1}
		in14 {Type I LastRead 0 FirstWrite -1}
		in12 {Type I LastRead 0 FirstWrite -1}
		in15 {Type I LastRead 0 FirstWrite -1}
		in17 {Type I LastRead 0 FirstWrite -1}
		in19 {Type I LastRead 0 FirstWrite -1}
		in20 {Type I LastRead 0 FirstWrite -1}
		in22 {Type I LastRead 0 FirstWrite -1}
		in24 {Type I LastRead 0 FirstWrite -1}
		in27 {Type I LastRead 0 FirstWrite -1}
		in28 {Type I LastRead 0 FirstWrite -1}
		in29 {Type I LastRead 0 FirstWrite -1}
		in32 {Type I LastRead 0 FirstWrite -1}
		out13 {Type O LastRead -1 FirstWrite 0}
		out30 {Type IO LastRead 2 FirstWrite 1}
		out31 {Type O LastRead -1 FirstWrite 2}}}

set hasDtUnsupportedChannel 0

set PerformanceInfo {[
	{"Name" : "Latency", "Min" : "1", "Max" : "2"}
	, {"Name" : "Interval", "Min" : "2", "Max" : "3"}
]}

set PipelineEnableSignalInfo {[
]}

set Spec2ImplPortList { 
	in1 { ap_none {  { in1 in_data 0 32 } } }
	in2 { ap_none {  { in2 in_data 0 32 } } }
	in3 { ap_none {  { in3 in_data 0 32 } } }
	in4 { ap_none {  { in4 in_data 0 32 } } }
	in7 { ap_none {  { in7 in_data 0 32 } } }
	in8 { ap_none {  { in8 in_data 0 32 } } }
	in9 { ap_none {  { in9 in_data 0 32 } } }
	in10 { ap_none {  { in10 in_data 0 32 } } }
	in14 { ap_none {  { in14 in_data 0 32 } } }
	in12 { ap_none {  { in12 in_data 0 32 } } }
	in15 { ap_none {  { in15 in_data 0 32 } } }
	in17 { ap_none {  { in17 in_data 0 32 } } }
	in19 { ap_none {  { in19 in_data 0 32 } } }
	in20 { ap_none {  { in20 in_data 0 32 } } }
	in22 { ap_none {  { in22 in_data 0 32 } } }
	in24 { ap_none {  { in24 in_data 0 32 } } }
	in27 { ap_none {  { in27 in_data 0 32 } } }
	in28 { ap_none {  { in28 in_data 0 32 } } }
	in29 { ap_none {  { in29 in_data 0 32 } } }
	in32 { ap_none {  { in32 in_data 0 32 } } }
	out13 { ap_vld {  { out13 out_data 1 32 }  { out13_ap_vld out_vld 1 1 } } }
	out30 { ap_ovld {  { out30_i in_data 0 32 }  { out30_o out_data 1 32 }  { out30_o_ap_vld out_vld 1 1 } } }
	out31 { ap_vld {  { out31 out_data 1 32 }  { out31_ap_vld out_vld 1 1 } } }
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

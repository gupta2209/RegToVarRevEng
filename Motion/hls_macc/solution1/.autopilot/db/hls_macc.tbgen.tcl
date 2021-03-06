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
	{ in5 int 32 regular  }
	{ in6 int 32 regular  }
	{ in7 int 32 regular  }
	{ in8 int 32 regular  }
	{ in9 int 32 regular  }
	{ in10 int 32 regular  }
	{ out1 int 32 regular {pointer 1}  }
	{ out2 int 32 regular {pointer 1}  }
	{ out3 int 32 regular {pointer 1}  }
}
set C_modelArgMapList {[ 
	{ "Name" : "in1", "interface" : "wire", "bitwidth" : 32, "direction" : "READONLY", "bitSlice":[{"low":0,"up":31,"cElement": [{"cName": "in1","cData": "int","bit_use": { "low": 0,"up": 31},"cArray": [{"low" : 0,"up" : 0,"step" : 0}]}]}]} , 
 	{ "Name" : "in2", "interface" : "wire", "bitwidth" : 32, "direction" : "READONLY", "bitSlice":[{"low":0,"up":31,"cElement": [{"cName": "in2","cData": "int","bit_use": { "low": 0,"up": 31},"cArray": [{"low" : 0,"up" : 0,"step" : 0}]}]}]} , 
 	{ "Name" : "in3", "interface" : "wire", "bitwidth" : 32, "direction" : "READONLY", "bitSlice":[{"low":0,"up":31,"cElement": [{"cName": "in3","cData": "int","bit_use": { "low": 0,"up": 31},"cArray": [{"low" : 0,"up" : 0,"step" : 0}]}]}]} , 
 	{ "Name" : "in4", "interface" : "wire", "bitwidth" : 32, "direction" : "READONLY", "bitSlice":[{"low":0,"up":31,"cElement": [{"cName": "in4","cData": "int","bit_use": { "low": 0,"up": 31},"cArray": [{"low" : 0,"up" : 0,"step" : 0}]}]}]} , 
 	{ "Name" : "in5", "interface" : "wire", "bitwidth" : 32, "direction" : "READONLY", "bitSlice":[{"low":0,"up":31,"cElement": [{"cName": "in5","cData": "int","bit_use": { "low": 0,"up": 31},"cArray": [{"low" : 0,"up" : 0,"step" : 0}]}]}]} , 
 	{ "Name" : "in6", "interface" : "wire", "bitwidth" : 32, "direction" : "READONLY", "bitSlice":[{"low":0,"up":31,"cElement": [{"cName": "in6","cData": "int","bit_use": { "low": 0,"up": 31},"cArray": [{"low" : 0,"up" : 0,"step" : 0}]}]}]} , 
 	{ "Name" : "in7", "interface" : "wire", "bitwidth" : 32, "direction" : "READONLY", "bitSlice":[{"low":0,"up":31,"cElement": [{"cName": "in7","cData": "int","bit_use": { "low": 0,"up": 31},"cArray": [{"low" : 0,"up" : 0,"step" : 0}]}]}]} , 
 	{ "Name" : "in8", "interface" : "wire", "bitwidth" : 32, "direction" : "READONLY", "bitSlice":[{"low":0,"up":31,"cElement": [{"cName": "in8","cData": "int","bit_use": { "low": 0,"up": 31},"cArray": [{"low" : 0,"up" : 0,"step" : 0}]}]}]} , 
 	{ "Name" : "in9", "interface" : "wire", "bitwidth" : 32, "direction" : "READONLY", "bitSlice":[{"low":0,"up":31,"cElement": [{"cName": "in9","cData": "int","bit_use": { "low": 0,"up": 31},"cArray": [{"low" : 0,"up" : 0,"step" : 0}]}]}]} , 
 	{ "Name" : "in10", "interface" : "wire", "bitwidth" : 32, "direction" : "READONLY", "bitSlice":[{"low":0,"up":31,"cElement": [{"cName": "in10","cData": "int","bit_use": { "low": 0,"up": 31},"cArray": [{"low" : 0,"up" : 0,"step" : 0}]}]}]} , 
 	{ "Name" : "out1", "interface" : "wire", "bitwidth" : 32, "direction" : "WRITEONLY", "bitSlice":[{"low":0,"up":31,"cElement": [{"cName": "out1","cData": "int","bit_use": { "low": 0,"up": 31},"cArray": [{"low" : 0,"up" : 0,"step" : 1}]}]}]} , 
 	{ "Name" : "out2", "interface" : "wire", "bitwidth" : 32, "direction" : "WRITEONLY", "bitSlice":[{"low":0,"up":31,"cElement": [{"cName": "out2","cData": "int","bit_use": { "low": 0,"up": 31},"cArray": [{"low" : 0,"up" : 0,"step" : 1}]}]}]} , 
 	{ "Name" : "out3", "interface" : "wire", "bitwidth" : 32, "direction" : "WRITEONLY", "bitSlice":[{"low":0,"up":31,"cElement": [{"cName": "out3","cData": "int","bit_use": { "low": 0,"up": 31},"cArray": [{"low" : 0,"up" : 0,"step" : 1}]}]}]} , 
 	{ "Name" : "ap_return", "interface" : "wire", "bitwidth" : 32,"bitSlice":[{"low":0,"up":31,"cElement": [{"cName": "return","cData": "int","bit_use": { "low": 0,"up": 31},"cArray": [{"low" : 0,"up" : 1,"step" : 0}]}]}]} ]}
# RTL Port declarations: 
set portNum 23
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
	{ in5 sc_in sc_lv 32 signal 4 } 
	{ in6 sc_in sc_lv 32 signal 5 } 
	{ in7 sc_in sc_lv 32 signal 6 } 
	{ in8 sc_in sc_lv 32 signal 7 } 
	{ in9 sc_in sc_lv 32 signal 8 } 
	{ in10 sc_in sc_lv 32 signal 9 } 
	{ out1 sc_out sc_lv 32 signal 10 } 
	{ out1_ap_vld sc_out sc_logic 1 outvld 10 } 
	{ out2 sc_out sc_lv 32 signal 11 } 
	{ out2_ap_vld sc_out sc_logic 1 outvld 11 } 
	{ out3 sc_out sc_lv 32 signal 12 } 
	{ out3_ap_vld sc_out sc_logic 1 outvld 12 } 
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
 	{ "name": "in5", "direction": "in", "datatype": "sc_lv", "bitwidth":32, "type": "signal", "bundle":{"name": "in5", "role": "default" }} , 
 	{ "name": "in6", "direction": "in", "datatype": "sc_lv", "bitwidth":32, "type": "signal", "bundle":{"name": "in6", "role": "default" }} , 
 	{ "name": "in7", "direction": "in", "datatype": "sc_lv", "bitwidth":32, "type": "signal", "bundle":{"name": "in7", "role": "default" }} , 
 	{ "name": "in8", "direction": "in", "datatype": "sc_lv", "bitwidth":32, "type": "signal", "bundle":{"name": "in8", "role": "default" }} , 
 	{ "name": "in9", "direction": "in", "datatype": "sc_lv", "bitwidth":32, "type": "signal", "bundle":{"name": "in9", "role": "default" }} , 
 	{ "name": "in10", "direction": "in", "datatype": "sc_lv", "bitwidth":32, "type": "signal", "bundle":{"name": "in10", "role": "default" }} , 
 	{ "name": "out1", "direction": "out", "datatype": "sc_lv", "bitwidth":32, "type": "signal", "bundle":{"name": "out1", "role": "default" }} , 
 	{ "name": "out1_ap_vld", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "outvld", "bundle":{"name": "out1", "role": "ap_vld" }} , 
 	{ "name": "out2", "direction": "out", "datatype": "sc_lv", "bitwidth":32, "type": "signal", "bundle":{"name": "out2", "role": "default" }} , 
 	{ "name": "out2_ap_vld", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "outvld", "bundle":{"name": "out2", "role": "ap_vld" }} , 
 	{ "name": "out3", "direction": "out", "datatype": "sc_lv", "bitwidth":32, "type": "signal", "bundle":{"name": "out3", "role": "default" }} , 
 	{ "name": "out3_ap_vld", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "outvld", "bundle":{"name": "out3", "role": "ap_vld" }} , 
 	{ "name": "ap_return", "direction": "out", "datatype": "sc_lv", "bitwidth":32, "type": "signal", "bundle":{"name": "ap_return", "role": "default" }}  ]}

set RtlHierarchyInfo {[
	{"ID" : "0", "Level" : "0", "Path" : "`AUTOTB_DUT_INST", "Parent" : "",
		"CDFG" : "hls_macc",
		"Protocol" : "ap_ctrl_hs",
		"ControlExist" : "1", "ap_start" : "1", "ap_ready" : "1", "ap_done" : "1", "ap_continue" : "0", "ap_idle" : "1",
		"Pipeline" : "None", "UnalignedPipeline" : "0", "RewindPipeline" : "0", "ProcessNetwork" : "0",
		"II" : "0",
		"VariableLatency" : "1", "ExactLatency" : "-1", "EstimateLatencyMin" : "4", "EstimateLatencyMax" : "4",
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
			{"Name" : "in5", "Type" : "None", "Direction" : "I"},
			{"Name" : "in6", "Type" : "None", "Direction" : "I"},
			{"Name" : "in7", "Type" : "None", "Direction" : "I"},
			{"Name" : "in8", "Type" : "None", "Direction" : "I"},
			{"Name" : "in9", "Type" : "None", "Direction" : "I"},
			{"Name" : "in10", "Type" : "None", "Direction" : "I"},
			{"Name" : "out1", "Type" : "Vld", "Direction" : "O"},
			{"Name" : "out2", "Type" : "Vld", "Direction" : "O"},
			{"Name" : "out3", "Type" : "Vld", "Direction" : "O"}]}]}


set ArgLastReadFirstWriteLatency {
	hls_macc {
		in1 {Type I LastRead 1 FirstWrite -1}
		in2 {Type I LastRead 1 FirstWrite -1}
		in3 {Type I LastRead 1 FirstWrite -1}
		in4 {Type I LastRead 0 FirstWrite -1}
		in5 {Type I LastRead 2 FirstWrite -1}
		in6 {Type I LastRead 1 FirstWrite -1}
		in7 {Type I LastRead 0 FirstWrite -1}
		in8 {Type I LastRead 2 FirstWrite -1}
		in9 {Type I LastRead 1 FirstWrite -1}
		in10 {Type I LastRead 0 FirstWrite -1}
		out1 {Type O LastRead -1 FirstWrite 4}
		out2 {Type O LastRead -1 FirstWrite 4}
		out3 {Type O LastRead -1 FirstWrite 4}}}

set hasDtUnsupportedChannel 0

set PerformanceInfo {[
	{"Name" : "Latency", "Min" : "4", "Max" : "4"}
	, {"Name" : "Interval", "Min" : "5", "Max" : "5"}
]}

set PipelineEnableSignalInfo {[
]}

set Spec2ImplPortList { 
	in1 { ap_none {  { in1 in_data 0 32 } } }
	in2 { ap_none {  { in2 in_data 0 32 } } }
	in3 { ap_none {  { in3 in_data 0 32 } } }
	in4 { ap_none {  { in4 in_data 0 32 } } }
	in5 { ap_none {  { in5 in_data 0 32 } } }
	in6 { ap_none {  { in6 in_data 0 32 } } }
	in7 { ap_none {  { in7 in_data 0 32 } } }
	in8 { ap_none {  { in8 in_data 0 32 } } }
	in9 { ap_none {  { in9 in_data 0 32 } } }
	in10 { ap_none {  { in10 in_data 0 32 } } }
	out1 { ap_vld {  { out1 out_data 1 32 }  { out1_ap_vld out_vld 1 1 } } }
	out2 { ap_vld {  { out2 out_data 1 32 }  { out2_ap_vld out_vld 1 1 } } }
	out3 { ap_vld {  { out3 out_data 1 32 }  { out3_ap_vld out_vld 1 1 } } }
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

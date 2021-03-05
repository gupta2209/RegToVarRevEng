import re
filename = input("Enter the name of file")
file = open(filename,"r")
Lines = file.readlines()
file.close()

file = open("parser_aft_sch.c",'w')
for line in Lines:
	words = line.split()
	if len(words) >=4 and words[3] == "Binding":
		break
	if len(words) and words[0] == "State":
		file.write("\n" + words[0]+words[1]+":\n")
	inst = re.findall(r'"([^"]*)"',line)
	if len(inst):
		instype = inst[0].split()
		if len(instype) and instype[0] == 'br': 
			file.write("//"+str(inst[0])+"\n")
		elif len(instype) and instype[0] != 'call':		
			file.write(str(inst[0])+" //"+str(inst[0])+"\n")
			#file.write(str(inst[0])+"\n")
file.close()
"""
file = open("parser_aft_sch.c",'r')
Lines = file.readlines()
file.close()

file = open("parser_aft_sch.c",'w')
for line in Lines:
	words = line.split()
	if len(words) >= 3 and words[2] == 'icmp':
		if words[3] == 'eq':
			file.write(words[0][1:]+" = "+words[5][1:-1]+" == "+words[6]+" ? 1 : 0;\n")
	elif len(words) >= 3 and words[2] == 'zext':
		file.write(words[0][1:]+" = "+words[4][1:]+" ;\n")
	elif len(words) >= 3 and words[2] == 'add':
		if words[4][0] == '-' or words[4][0] == '%':
			if words[5][0] == '-' or words[5][0] == '%': #%i = add i6 %i_0, 1
				file.write(words[0][1:]+" = "+words[4][1:-1]+" + "+words[5][1:]+" ;\n")
			else:
				file.write(words[0][1:]+" = "+words[4][1:-1]+" + "+words[5]+" ;\n")	
		else:
			if words[5][0] == '-' or words[5][0] == '%': #%i = add i6 %i_0, 1
				file.write(words[0][1:]+" = "+words[4]+" + "+words[5][1:]+" ;\n")
			else:
				file.write(words[0][1:]+" = "+words[4]+" + "+words[5]+" ;\n")			
	else:
		file.write(line)
		#file.write("\n")
file.close()
"""

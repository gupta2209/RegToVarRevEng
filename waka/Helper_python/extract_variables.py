#extract variables from the code

file = open("parser_aft_sch.c",'r')
Lines = file.readlines()
file.close()

var = set()
for line in Lines:
	words = line.split()
	if len(words) >=2 and words[1] == '=':
		if len(words[0]) >= 2 and words[0][0:2] != '//':
			var.add(words[0])

file = open("vars.txt", 'w')
for variables in var:
	file.write('int '+variables+'; \n')
file.close()

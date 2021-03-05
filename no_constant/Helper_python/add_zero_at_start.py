file = open("new_input_to_daikon.txt",'r')
lines = file.readlines()
file.close()

file = open("input_to_daikon_zero.txt","w")
for line in lines:
	file.write("0 "+str(line))
file.close();

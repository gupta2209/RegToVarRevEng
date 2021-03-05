file = open("__temp.txt",'r')
lines = file.readlines()
file.close()

file = open("remove__temp.txt",'w')

for line in lines:
	print(line[-10:])
	if str(line[-10:]) == "__temp=0;":
		file.write(line)
file.close()

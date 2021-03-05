file = open('input_to_daikon.txt','r')
lines = file.readlines()
file.close()

file = open("new_input_to_daikon.txt",'w')

for line in lines:
    nums = line.split()
    c = 0
    for num in nums:
        file.write(str(num)+" ")
        c = c + 1
        if c == 15:
            file.write("\n")
            c = 0
file.close()
#import yaml

#with open('rv_i.txt', 'r') as file:
#	for line in file:
#		parts = line.split()
#			print(parts[0])
#

import yaml

with open('rv_i.yaml', 'r') as file: 		#open file as read only
    data = file.read().splitlines() 		#read file and split all the lines, and fetch the value of total lines

opcodes=[] 									#creates an empty list
for line in data:
	if not line or line.startswith("#"):	#check if the line is empty or has #, and skip it
		continue
	line=line.strip() 						#removes all symbols
	parts=line.split() 						#split a line into lists
	opcodes.append(parts[0])				#add them into opcodes list

opcodes=sorted(opcodes) 					#sort

#for list in opcodes:
#	print(list) 							#prints the list

with open('all_opcodes.txt', 'w') as file: 	#opens the file with access to write
	for list in opcodes:					#
		file.write(list + "\n")



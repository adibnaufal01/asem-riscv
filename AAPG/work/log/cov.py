filename="out_pg_excep10_00000.log"
output="excep10.txt"

opcodes={}

with open(filename, 'r') as file:
	for line in file:
		parts=line.split()
		if len(parts) < 5:
			continue
		else:
			#print(parts[4])
			opcode=parts[4]

			if opcode in opcodes:
				opcodes[opcode]+=1
			else:
				opcodes[opcode]=1

#for opcode, count in sorted(opcodes.items(), key =lambda x:x[1], reverse=True):
#	print(f"{opcode} : {count}")

with open(output, 'w') as file:
	for opcode, count in sorted(opcodes.items(), key =lambda x:x[1], reverse=True):
		file.write(opcode + " : "+ str(count)+ "\n")

print(f"Done. File saved as {output}")

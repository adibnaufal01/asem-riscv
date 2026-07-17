filename = "out_pg_excep10_00000.S"
output_filename="excep10.txt"

opcode_count={}

with open(filename,'r') as f:
	for line in f:
		if ':\t' not in line:
			continue

		parts = line.split("\t")
		instruction = parts[1]
		token=instruction.split()

		if not token:
			continue

		opcode=token[0]

		if opcode.startswith('.'):
			continue
		if opcode in opcode_count:
			opcode_count[opcode]+=1
		else:
			opcode_count[opcode]=1

for opcode, count in opcode_count.items():
	print(f"{opcode}: {count}")
	print(token[0])

with open(output_filename,'w') as out:
	for opcode, count in opcode_count.items():
		out.write(opcode+" : "+str(count)+"\n")

print(f"Done. Output written as {output_filename}")
#=====STEP 1========
#with open(filename, 'r') as f:
#	for line in f:
#		print(repr(line))
#=====STEP 2========
#line = "i0000000006:\tand                 s0, t3, t2\n"
#
#parts = line.split("\t")
#instruction = parts[1]
#token=instruction.split()
#print(token[0])
##print(parts)

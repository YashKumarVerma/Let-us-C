amount  = int(input("Enter total amount : "))
notes = [100, 50, 10, 5, 2, 1]
noteCount = {}

for note in notes:
	noteCount[note] = 0
	while(int(note) <= amount):
		noteCount[note]+=1
		amount -= note

print(noteCount)
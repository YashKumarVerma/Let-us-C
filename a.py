number = input("Enter Number : ")
res = 0

for digit in str(number):
	res+= int(digit)

print("Sum of digits is : %d" % res)
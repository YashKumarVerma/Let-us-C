number = int(input("Enter Number : "))

res  = number
increment,i = 0,0

while(number > 0):
	number = int(number/10)
	increment = increment + 10**i
	i+=1

print("Output : %d " % (increment+res))
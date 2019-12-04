s1 = int(input("Enter length of side 1 : "))
s2 = int(input("Enter length of side 2 : "))
s3 = int(input("Enter length of side 3 : "))
s  = float((s1+s2+s3)/2)

print("Area is %f" % (s*(s-s1)*(s-s2)*(s-s3))**(float(1/2)) )
#include<stdio.h>
#include<math.h>

int main(){
	int a, b, c;
	a= b = c  =0;
	float s, res;

	printf("Enter Sides of Triangle\n");
	printf("Side 1: ");
	scanf("%d",&a);
	printf("Side 2: ");
	scanf("%d",&b);
	printf("Side 3: ");
	scanf("%d",&c);

	s = (a+b+c)/2;
	res = sqrt(s*(s-a)*(s-b)*(s-c));
	printf("Area is : %f \n", s );
	
	return 0;
}
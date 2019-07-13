#include<stdio.h>
#include <math.h>

int main(){
	float deg;

	printf("Enter angle in degrees : ");
	scanf(" %f", &deg);
	deg = pow(sin(deg*3.14/180),2.0) + pow(cos(deg*3.14/180),2.0);

	printf("%f \n", deg  );
	return 0;
}
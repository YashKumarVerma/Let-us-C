// returns in degrees
#include<stdio.h>
#include<math.h>


int main(){
	float x,y, dist, theta;

	printf("Enter x coordinate : ");
	scanf(" %f", &x);
	printf("Enter y coordinate : ");
	scanf(" %f", &y);

	dist = pow(pow(x,2.0)+pow(y,2.0), 0.5);
	theta = atan(y/x)*180/3.14;

	printf(" %f \n", dist );
	printf(" %f \n", theta );

	return 0;
}
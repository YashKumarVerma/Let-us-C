#include<stdio.h>

int main(){

	int x1,x2,x3,y1,y2,y3;
	float m1, m2, m3;

	printf("Enter coordinates of first point separated by space (x, y) : ");
	scanf(" %d %d", &x1, &y1);

	printf("Enter coordinates of second point separated by space (x, y) : ");
	scanf(" %d %d", &x2, &y2);

	printf("Enter coordinates of third point separated by space (x, y) : ");
	scanf(" %d %d", &x3, &y3);

	m1 = (y2-y1)/(x2-x1);
	m2 = (y3-y2)/(x3-x2);
	m3 = (y3-y1)/(x3-x1);

	if(m1 == m2 == m3){
		printf("ON Same line\n");
	}else{
		printf("Not on same line\n");
		printf("%f %f %f \n", m1, m2, m3 );
	}


	return 0;
}
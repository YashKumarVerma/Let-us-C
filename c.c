#include<stdio.h>

int main(){
	int num;
	num=0;

	printf("Enter a number : ");
	scanf("%d", &num);

	printf("Last Digit : %d \n", (num%10) );
	while(num >= 10){
		num = num/10;
	}
	printf("First Digit : %d \n", num );


	return 1;
}
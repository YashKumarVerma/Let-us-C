#include<stdio.h>

int sumOfDigits(int num){
	int sum, digit;
	sum = digit = 0;

	while(num != 0){
		digit = num %10;
		sum = digit+sum;
		num = num/10;
	}
	return sum;
}

int main(){
	int num;

	printf("Enter a number : ");
	scanf(" %d", &num);

	num = sumOfDigits(num);

	printf("Sum of digits is : %d \n",num);
	return 0;
}
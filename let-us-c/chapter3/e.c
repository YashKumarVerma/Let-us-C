#include<stdio.h>

int reverse(int n){
	int digit, num;
	num = 0;
	while(n>0){
		digit = n%10;
		num = num*10+digit;
		n = n/10;
	}
	return num;
}

int main(){
	int num;
	printf("Enter a number : ");
	scanf(" %d", &num );

	if(num==reverse(num)){
		printf("Reverse is Same\n");
	}else{
		printf("Reverse is not same\n");
	}
}
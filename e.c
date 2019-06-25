#include<stdio.h>

// to raise num^pow
int power(int num, int pow){
	int res = 1;
	for(int i=0; i < pow; i++){
		res = res*num;
	}
	return res;
}

int main(){
	// variables
	int num, len, increment, res;
	num = len = increment = res = 0;

	// get number
	printf("Enter number : ");
	scanf(" %i",&num);

	// calculate increment
	res = num;
	while(num > 0){
		num = num/10;
		increment = increment + power(10, len++);
	}

	// result
	printf("%i\n", increment+res );
	return 0;
}
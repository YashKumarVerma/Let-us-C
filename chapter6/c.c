#include<stdio.h>
// First line contains input
// calculate using, not using recursion, sum of digits.
void withoutRecursion(int num){
	int digit, sum=0;
	while(num>0){
		digit = num%10;
		sum+=digit;
		num = num/10;
	}
	printf("%d", sum);
}

int recursion(int num){
	int sum=0;

	if(num>0){
		sum = sum+recursion(num/10);
	}

	return sum;
}

// without recursion
int main(){
	int num;

	printf("Enter the number : ");
	scanf(" %d", &num);

	// withoutRecursion(num);
	printf(" %d", recursion(num));
	return 0;
}
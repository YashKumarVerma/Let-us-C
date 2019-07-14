#include<stdio.h>

int main(){
	int num, fact;
	printf("Enter a number to calculate factorial : ");
	scanf(" %d", &num);
	for(fact=1; num>1; num--){
		fact*=num;
	}
	printf("Factorial is %d\n", fact );
	return 0;
}
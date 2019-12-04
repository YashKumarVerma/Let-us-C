#include<stdio.h>
#include<math.h>

int main(){

	int limit, num, digit, res;
	printf("Enter upper limit :");
	scanf(" %d", &limit);

	printf("\n\n PALINDROMES \n\n");
	for(int i=1; i<limit; i++){
		num = i;
		res = 0;
		while(num>0){
			digit = num%10;
			res = res*10+digit;
			num = num/10;
		}

		if(res == i){
			printf("%d is palindrome\n", i );
		}
	}
	printf("\n\n ARMSTRONGS \n\n");
	for(int i=1; i<limit; i++){
		num = i;
		res = 0;
		while(num>0){
			digit = num%10;
			res = res + pow(digit,3);
			num = num/10;
		}

		if(res == i){
			printf("%d is armstring\n", i );
		}
	}

	return 0;
}
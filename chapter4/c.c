#include<stdio.h>

int power(int a, int b){
	int res = 1;
	for(int i=1; i<=b; i++){
		res = res*a;
	}
	return res;
}

int main(){
	int a,b;
	
	printf("To raise a to power b, enter a and b : ");
	scanf(" %d %d", &a, &b);

	printf("%d", power(a,b));
	return 0;
}
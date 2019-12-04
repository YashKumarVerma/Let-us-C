#include<stdio.h>

int main(){
	int a[100], limit, i, temp;

	printf("Enter number of elements in array : ");
	scanf(" %d", &limit);

	// input mechanism
	for(i=0; i<limit; i++){
		scanf("%d", &a[i]);
	}

	// reverse
	for(i=0; i<(limit/2); i++){
		temp = a[i];
		a[i] = a[limit-i-1];
		a[limit-i-1] = temp;
	}

	// display
	for(i=0; i<limit; i++){
		printf("%d\t", a[i]);
	}
	return 0;
}
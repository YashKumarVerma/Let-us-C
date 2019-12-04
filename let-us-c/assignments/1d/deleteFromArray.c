#include<stdio.h>

int main(){
	int a[100], limit, i, target;

	// inputs
	printf("Enter number of elements in array : ");
	scanf("%d", &limit);

	for(i=0; i<limit; i++){
		scanf(" %d", &a[i]);
	}

	printf("Enter n for nth element to delete:  ");
	scanf(" %d", &target);


	// overwrite (n-1)th index and shift array
	for(i=target-1; i<limit-1; i++){
		a[i] = a[i+1];
	}
	limit--;

	// print final arrays
	for(i=0; i<limit; i++){
		printf(" %d", a[i]);
	}
	return 0;
}
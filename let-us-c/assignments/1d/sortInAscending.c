#include<stdio.h>

int main(){
	int a[100], limit, i,j,temp;

	printf("Enter the number of elements : ");
	scanf(" %d", &limit);


	// take input
	for(i=0; i<limit; i++){
		scanf(" %d", &a[i]);
	}


	// sort numbers
	for(i=0; i<limit; i++){
		for(j=i; j<limit; j++){
			if(a[j]<a[i]){
				temp = a[j];
				a[j] = a[i];
				a[i] = temp;
			}
		}
	}

	// print
	for(i=0; i<limit; i++)
		printf("%d\t", a[i]);
	return 0;
}
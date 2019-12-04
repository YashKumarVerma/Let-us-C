#include<stdio.h>

int main(){

	int limit,a[100], i, j, flag, uniqueC=0, uniqueA[100], counter;

	printf("Enter the number of elements : ");
	scanf("%d", &limit);

	for(i=0; i<limit; i++){
		scanf(" %d", &a[i]);

		// check if unique elemet in array
		flag=0;
		for(j=0; j<uniqueC; j++){
			if(uniqueA[j] == a[i]){
				flag=1;
			}
		}

		// if not in array, add to array
		if(!flag){
			uniqueA[uniqueC++] = a[i];
		}
	}

	// check individually for each unique element
	for(i=0; i<uniqueC; i++){
		counter=0;
		for(j=0; j<limit; j++){
			if(uniqueA[i]==a[j]){
				counter++;
			}
		}
		printf("%d occurs %d times \n", uniqueA[i], counter);
	}

	return 0;
}
#include<stdio.h>

int main(){
	int a[100], limit, uniqueA[100], uniqueC=0, flag, i,j;

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

	// duplicate elements = total elements - unique elements
	printf("Duplicate elements :  %d", limit- uniqueC );

	return 0;
}
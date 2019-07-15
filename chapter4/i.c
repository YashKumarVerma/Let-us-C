#include<stdio.h>

int main(){
	int a[100], num, max, min;
	
	printf("Enter number of items to enter :");
	scanf(" %d", &num );

	for(int i=1; i<=num; i++){
		printf("Enter number %d :", i );
		scanf(" %d", &a[i]);
	}

	max = min = a[1];

	for(int i=1; i<=num; i++){
		if(a[i]>max){
			max = a[i];
		}
		if(a[i]<min){
			min = a[i];
		}
	}

	printf("\n\nMaximum Value : %d", max);
	printf("\nMinimum Value : %d", min);
	printf("\nRange : %d", (max-min));


	return 0;
}
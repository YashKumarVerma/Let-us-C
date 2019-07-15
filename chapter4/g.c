#include<stdio.h>

int main(){
	int positive, negative, zero, num;
	char choice;
	positive = negative = zero = 0;

	do{
		printf("Enter a number\n");
		scanf(" %d", &num );
		if(num>0){
			positive++;
		}
		else if(num <0){
			negative++;
		}
		else{
			zero++;
		}
		printf("Do you want to enter more ? Y/N :");
		scanf(" %c", &choice);
	}
	while(choice == 'Y');

	printf("\n\n\n REPORT : \n\n\n");
	printf("Positive : %d\n", positive);
	printf("Negative : %d\n", negative);
	printf("Zeroes   : %d\n", zero);
	return 0;
}
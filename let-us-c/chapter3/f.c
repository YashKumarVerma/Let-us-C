#include <stdio.h>

int main(){
	int num;
	int ages[100];
	int max, index;

	printf("Enter the number of people to compare :");
	scanf(" %d", &num);

	for(int i=1; i<=num; i++){
		printf("Enter age of Person-%d :", i );
		scanf(" %d", &ages[i]);
	}
	max = ages[0];

	for(int i=1; i<num; i++){
		if(ages[i] > max){
			max = ages[i];
			index = i;
		}
	}

	printf("Greatest Age is of person %d which is %d years \n", index, ages[index] );
	return 0;
}
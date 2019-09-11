#include<stdio.h>

int main(){
	int i,j,rows,cols,max, min, a[100][100];

	printf("Enter number of rows and cols : \n");
	scanf(" %d %d", &rows, &cols);

	for(i=0; i<rows; i++){
		for(j=0; j<cols; j++){
			scanf(" %d", &a[i][j]);
		}
	}

	for(i=0; i<rows; i++){
		for(j=0; j<cols; j++){
			if(a[i][j]>max){
				max = a[i][j];
			}
			if(a[i][j]<min){
				min = a[i][j];
			}
		}
	}

	printf("Maximum : %d \n Minimum : %d ", max, min);

	return 0;
}
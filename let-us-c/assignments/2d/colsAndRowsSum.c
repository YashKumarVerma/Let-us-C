#include<stdio.h>

int main(){
	int i,j, rows, cols, sum= 0, a[100][100];
	printf("Enter dimensions of matrix -> rows x cols : ");
	scanf(" %d %d", &rows, &cols );

	for(i=0; i<rows; i++){
		for(j=0; j<cols; j++){
			scanf(" %d", &a[i][j]);
		}
	}


	for(i=0; i<rows; i++){
		sum=0;
		for(j=0; j<cols; j++){
			sum += a[i][j];
		}
		printf("Sum of row %d is %d \n", i+1, sum);
	}

	for(i=0; i<rows; i++){
		sum=0;
		for(j=0; j<cols; j++){
			sum += a[j][i];
		}
		printf("Sum of column %d is %d \n", i+1, sum);
	}


	// for(i=0; i<rows; i++){
	// 	sum=0;
	// 	for(j=0; j<cols; j++){
	// 		sum += a[i][j];
	// 	}
	// 	printf("Sum of row %d = %d \n", i, sum );
	// }

	return 0;
}
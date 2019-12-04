#include<stdio.h>

int main(){
	char a[100], b[100], i, j=0 ,c=0;

// length of string
	printf("Enter a string : ");
	scanf(" %s", a);

	for(i=0; a[i]!='\0'; i++){c++;}

	printf("String Length : %d\n", c);

// concat string
	printf("Enter second string : ");
	scanf(" %s", &a[c] );


	for(i=0; a[i]!='\0'; i++){
		printf("%c", a[i]);
	}
	printf("\n");

//comparing strings
	printf("Enter first string : ");
	scanf("%s", a);
	printf("Enter second string : ");
	scanf("%s", b);

	for(i=0; a[i]!='\0'; i++){
		if(a[i] != b[i]){
			printf("Strings not same\n");
			return 0;
		}
	}
	printf("Strings are same \n");

	return 0;
}
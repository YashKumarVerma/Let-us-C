#include<stdio.h>

int main(){
	char a[100],i;


	printf("Enter a string : ");
	scanf(" %s", &a);
	for(i=0; a[i]!='\0'; i++){
		printf("%c", a[i]-32);
	}
	return 0;
}
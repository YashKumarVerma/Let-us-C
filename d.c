#include<stdio.h>

int main(){
	int hundered, fifty, ten, five, two, one, money;
	hundered = fifty = ten = five = two = one = money = 0;

	printf("Enter amount : ");
	scanf(" %d", &money);

	while(money>=100){
		hundered++;
		money-=100;
	}
	while(money>=50){
		fifty++;
		money-=50;
	}
	while(money>=10){
		ten++;
		money-=10;
	}
	while(money>=5){
		five++;
		money -= 5;
	}
	while(money>=2){
		two++;
		money -= 2;
	}
	while(money>=1){
		one++;
		money -=1;
	}

	printf("\nHundered: %d\nFifty: %d\nTen: %d\nFive: %d\nTwo: %d\nOne: %d\n", hundered, fifty, ten, five, two, one);
	return 0;
}
#include<stdio.h>

int main(){
	int user, matchsticks, x;
	user = x = 0;
	matchsticks=21;

	while(matchsticks!=1){
		printf("Enter sticks to pick : ");
		scanf(" %d", &user);
		matchsticks=matchsticks-user;
		printf("Sticks Remaining : %d\n", matchsticks);
		
		if(matchsticks >=10){
			printf("Computer picked 4 sticks.\n");
			matchsticks -=4;
		}else{
			if(matchsticks<10 && matchsticks>5){
				x = matchsticks-5;
				printf("Computer picked %d sticks\n", x);
				matchsticks -=x;
			}else{
				x = matchsticks-1;
				printf("Computer picked %d sticks\n", x);
				matchsticks -=x;
			}
		}
		printf("Sticks Remaining : %d\n", matchsticks);
	}
	printf("You picked the last stick. You lost.\n");
	return 0;
}
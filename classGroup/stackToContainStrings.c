#include<stdio.h>
#include<stdlib.h>
#include<string.h>

#define MAX 10

char stack[MAX][9];
char data[9];
int top = -1;

int push(char data[9]);
int pop();
int displayStack();

int main(){
    int ch;

    printf("STACK OPERATIONS !");

    while(1){
        printf("Enter your choice : \n\n1.PUSH\n2.POP\n3.DISPLAY\n4.EXIT\n");
        scanf(" %d", &ch);

        switch(ch){
            case 1:
                printf("\nEnter a registration number to push : \n");
                scanf(" %s", data);
                
                if(push(data)){
                    printf("\n Registraiton number %s saved into stack \n", data);
                }
                
                else{
                    printf("\n Stack Overflow\n");
                }
                break;
            case 2:
                printf("\n\nPOPPING OUT REGISTRATION NUMBER\n");

                if(pop()){
                    printf("\n Registration number %s saved into stack \n", data);
                }

                else{
                    printf("\n Stack already empty\n");                    
                }
                break;
            case 3:
                printf("\nDisplaying all elements of stack : \n");
                
                if(!displayStack()){
                    printf("\nStack empty \n");
                }

                break;
            case 4:
                exit(0);
                break;
            default:
                printf("\nEnter a valid Selection !\n");
        }
    }


    return 0;
}

int push(char data[9]){
    if(top == MAX){
        return 0;
    }else{
        top = top + 1;
        strcpy(stack[top], data);
        return 1;
    }
}

int pop(){
    if(top == -1){
        return 0;
    }
    else{
        strcpy(data, stack[top]);
        top = top - 1;
        return 1;
    }
}

int displayStack(){
    int i;
    strcpy(data, stack[top]);
    if(top == -1){
        return 0;
    }
    else{
        printf(" %s \n", data);
    }
    return 1;
}

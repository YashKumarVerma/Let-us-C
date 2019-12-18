#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include<ctype.h>

#define MAX 10

char stack[MAX][10];
char data[10];
int top = -1;

int push(char data[10]);
int pop();
int displayStack();
int checkReg(char s[10]);

int main(){
    int ch, x;

    printf("STACK OPERATIONS !");

    while(1){
        printf("Enter your choice : \n\n1.PUSH\n2.POP\n3.DISPLAY\n4.EXIT\n");
        scanf(" %d", &ch);

        switch(ch){
            case 1:
                printf("\nEnter a registration number to push : \n");
                scanf(" %s", data);
                x = push(data);
                break;

            case 2:
                printf("\n\nPOPPING OUT REGISTRATION NUMBER\n");
                x = pop();
                break;

            case 3:
                printf("\nDisplaying top element of stack : \n");                
                x = displayStack();
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

int push(char data[10]){
    if(top == MAX){
        printf("\n Stack Full \n");
    }else{

        if(checkReg(data)==1){
            top = top + 1;
            strcpy(stack[top], data);
            printf("\n Registration number %s added to stack \n", stack[top]);
        }
        else{
            printf("\n Invalid Registration Number \n");
        }
    }
    return 0;
}

int pop(){
    if(top == -1){
        printf("\n Stack Empty \n");
    }
    else{
        printf("\n Registration number %s removed \n", stack[top]);
        top = top - 1;
    }
    return 0;
}

int displayStack(){
    int i;
    if(top == -1){
        printf("\n Stack empty ! \n");
    }
    else{
        printf(" %s \n", stack[top]);
    }
    return 0;
}


int checkReg(char s[10]){
        // length check
    if(strlen(s) != 9){
        return 0;
    }
    
    int flag = 0;

    flag = (s[0]!='1') ?  ++flag : flag;
    flag = (s[1]!='9') ?  ++flag : flag;
    flag = (s[2]!='B') ?  ++flag : flag;
    flag = (s[3]!='B') ?  ++flag : flag;
    flag = (s[4]!='S') ?  ++flag : flag;
    flag = (!isdigit(s[5])) ? ++flag : flag;
    flag = (!isdigit(s[6])) ? ++flag : flag;
    flag = (!isdigit(s[7])) ? ++flag : flag;
    flag = (!isdigit(s[8])) ? ++flag : flag;

    if(flag==0)
        return 1;
    else
        return 0;

}

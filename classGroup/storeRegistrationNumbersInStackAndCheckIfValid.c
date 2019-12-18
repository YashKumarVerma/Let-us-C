#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include<ctype.h>

#define MAX 10

char stack[MAX][9];
char data[9];
int top = -1;

int push(char data[9]);
int pop();
int displayStack();
int checkReg(char s[9]);

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
                if(x==1){
                    printf("\n Registraiton number %s saved into stack \n", data);
                }  
                else if(x==2){
                    printf("\n Invalid Registration Number \n");
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

        if(checkReg(data)==1){
            top = top + 1;
            strcpy(stack[top], data);
            return 1;
        }
        else{
            return 2;
        }
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


int checkReg(char s[9]){
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

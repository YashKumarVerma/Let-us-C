#include<stdio.h>
#include<ctype.h>
#include<string.h>

// data structure to store student record
struct Student{
	char reg[9];
	char name[100];
	int mark1, mark2, mark3;
};

// global data structure for student Record
struct Student data[100];
int studentCounter = 0;

// function declarations
int checkReg(char[]);

// take input
int inputData(int);

// function to print data
void printData();

int main(){

	int num,i,x;
	
	printf("Enter the number of students : ");
	scanf(" %d", &num);

	for(i=0; i<num; i++){
        startInputOperation:
        
        if( inputData(i) )
            printf("\e[32m Record Entered Successfully \e[0m\n");
        else
            goto startInputOperation;

        studentCounter++;
	}

    // printing operation
    printData();

return 0;
}


// function to check if registration number is valid or not
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


// function to take input data
int inputData(int i){
        // enter the name of students
		printf("Enter registration number of student : ");
		scanf(" %s", data[i].reg );
        
        // if regNo is valid
        if(checkReg(data[i].reg)){

            // enter other details
            printf("\n Enter the name of student : ");
            scanf(" %s", data[i].name); 
            printf("\n Enter marks in three subjects : ");
            scanf(" %d %d %d", &data[i].mark1, &data[i].mark2, &data[i].mark3);

            return 1;
        }
        else{
            printf("\e[31m INVALID Registration Number ! \e[0m\n");
            return 0; 
        }
}

void printData(){
    int i;
    
    printf("\n\n Printing Data \n\n");
    printf("%9s \t  %25s %5s %5s %5s \n", "Reg. No", "Name","Mark1","Mark2","Mark3");
    for(i=0; i<studentCounter; i++){
        printf("%9s \t %25s %5d %5d %5d \n", data[i].reg, data[i].name, data[i].mark1,data[i].mark2,data[i].mark3);
    }
    
}
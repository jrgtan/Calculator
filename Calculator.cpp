#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <conio.h>
     
int result, a ,b;    
int main()
{
   
    int input;
    char option;
     
do{
     
    printf("calculator:\n");
     
    printf("\n Enter 1 for addition:\n ");
    printf("Enter 2 for subtraction:\n ");
    printf("Enter 3 for multiplication:\n ");
    printf("Enter 4 for division:\n ");
    printf("Enter 5 for Square:\n ");
    printf("Enter 6 for Power:\n ");
    
     
    scanf("%d",&input);
     
    switch(input){
        case 1 :
        	printf("Enter a number:\n");
    		scanf("%d",&a);
    		printf("Enter second number:\n");
    		scanf("%d",&b);
			Add(a,b);
        	printf("The addition is : %d\n",result);
        break;
        case 2 : 
        	printf("Enter a number:\n");
    		scanf("%d",&a);
    		printf("Enter second number:\n");
    		scanf("%d",&b);
			Sub(a,b);
        	printf("The Substraction is : %d\n",result);
        break;
        case 3 : 
        	printf("Enter a number:\n");
   			scanf("%d",&a);
   			printf("Enter second number:\n");
    		scanf("%d",&b);
			Mul(a,b);
        	printf("The Multiplication is : %d\n",result);
        break;
        case 4 : 
        	printf("Enter a number:\n");
    		scanf("%d",&a);
    		printf("Enter second number:\n");
    		scanf("%d",&b);
			Div(a,b);
        	printf("The division is : %d\n",result);
        break;
        case 5:
        	printf("Enter a number:\n");
    		scanf("%d",&a);
    		Square(a);
    		printf("The Square is : %d\n",b);
        break;
        case 6:
        	printf("Enter a number:\n");
    		scanf("%d",&a);
    		printf("Enter second number:\n");
    		scanf("%d",&b);
			Power(a,b);
        	printf("The Power is : %d\n",result);
        break;

     
        efault: printf("wrong input\n");
     
    }
    printf("Do you want to continue ? (y/n)\n");
    option = getch();
     
    }while(option=='y');
     
    return 0;
}


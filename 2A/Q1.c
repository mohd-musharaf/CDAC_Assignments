/*Implement a choice based arithmatic calculator (1-add, 2-sub, 3-mul, 4-div etc), by implementing functions.*/

#include"stdio.h"

int add(int a,int b);
int sub(int a,int b);
int mul(int a,int b);
float mod(int a,int b);
float div( float a, float b);


int main()
{
 int num1,num2,choice;//add,sub,mul;
 float result;
 
 printf("Enter num1: ");
 scanf("%d",&num1);
 printf("Enter num2: ");
 scanf("%d",&num2);
 printf("Enter choice \n1-add \n2-sub \n3-mul \n4-div\n5-Modulus ");
 scanf( "\n%d",&choice);
 
 switch(choice)
 {
 case 1: 
 	result=add(num1,num2);
 	printf("addition is= %.2f\n",result);
 	break;
 	
 case 2: 
 	result=sub(num1,num2);
 	printf("subtraction is= %.2f\n",result);
 	break;
 	
 case 3:
 	result=mul(num1,num2);
 	printf("multiplication is= %.2f\n",result);
 	break;
 	
 case 4:
 	result=div(num1,num2);
 	printf("Division is= %.2f\n",result);
 	break;
 	
 case 5:
 	result=mod(num1,num2);
 	printf("Modulus is=%.2f\n",result);
 	
 default:
       printf("invalid input");
}
}


int add(int a, int b)
{
return (a+b);
}
int sub(int a, int b)
{
return (a-b);
}
float div(float a, float b)
{
return(a/b);
}

int mul(int a, int b)
{
return(a*b);
}
float mod(int a, int b)
{
return(a%b);
}

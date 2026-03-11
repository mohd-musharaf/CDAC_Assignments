// Find the factorial of the given number
#include<stdio.h>
int main()
{
int i,n,fact;
fact =1;
printf("Enter a number:");	
scanf("%d", &n);		//taking the input to calculate the factorial 
for(int i =1;i<=n;i++){
   fact = fact*i;
}
printf("Factorial:%d\n",fact);   //printing the factorial of given input
return 0;
}

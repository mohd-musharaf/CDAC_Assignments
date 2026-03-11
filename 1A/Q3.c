/*Write a C program to find out the biggest of three input numbers*/
#include "stdio.h"
int main(){
	int num1,num2,num3;
	printf("Enter 1st number:");
	scanf("%d",&num1);	// taking the 1st number from the user

	printf("Enter 2nd number:");
	scanf("%d",&num2);	// taking the 2nd number from the user


	printf("Enter 3rd number:");
	scanf("%d",&num3);	// taking the 3rd number from the user


	if(num1>num2 && num1>num3){
		printf("The biggest number is %d\n",num1);	//printing the biggest number if true
	}
	else if(num2>num1 && num2>num3){
		printf("The biggest number is %d\n", num2); //printing the biggest number if true
	}
	else
	{
		printf("The biggest number is %d\n",num3); //printing the biggest number if true
	}
	return 0;
}


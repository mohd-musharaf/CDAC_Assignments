#include<stdio.h>
int main(){

int num1,num2,temp,a,b,lcm,gcd;		//Initialize
printf("Enter two numbers:");
scanf("%d %d",&num1,&num2);			//input taken from user

a=num1;
b=num2;

while (b != 0){			       
	temp = b; 
	b = a % b;
	a = temp;
}
gcd = a;     
lcm = (num1 * num2) / gcd; //calculating LCM 

printf("GCD: %d\n", gcd);  // printing GCD
printf("LCM: %d\n", lcm);  // printing LCM

return 0;

}

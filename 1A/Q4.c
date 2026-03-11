/*Write a C program to find out given character is vowel or not*/
#include "stdio.h"
int main()
{
char alpha;

printf("Enter a character:");
scanf("%c",&alpha);	//addressing character as alpha

if(alpha=='a'|| alpha=='e' || alpha=='i' || alpha=='o' || alpha=='u' || alpha=='A' || alpha=='E' || alpha=='I' || alpha=='O' || alpha=='U')
{
printf("The given character is a vowel\n");
}
else 
{
printf("The given character is not a vowel\n");
}
return 0;
}

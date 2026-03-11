/*Write a program to implement the display and reverse display functions for a string

260240130025
260240130037

*/

#include<stdio.h>

//declaration
void displaystr(char str[],int size,int i);
void reversestr(char str[],int size,int i);

//main
int main()
{
char str[]="rituja";
int size = sizeof(str);
printf("%d\n",size);
displaystr(str,size,0);
printf("\n");
reversestr(str,size,size-1);
printf("\n");
return 0;
}
// function for display.
void displaystr(char str[],int size,int i)
{
for(int i =0;i<size;i++)
{
printf("%c",str[i]);
}
}
// functin for reverse the string.
void reversestr(char str[],int size,int i)
{
for( i = size-1;i>=0;i--)
{

{
printf("%c",str[i]);
}
}
}

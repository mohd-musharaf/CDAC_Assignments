/* Write a program number format conversions(decimal,binary and octal)*/

#include <stdio.h>

void binaryFunction(int a)
{
while(a!=0)
{
int binaryDigit = a%2;
a = a/2;
printf("%d",binaryDigit);
}

}

void octalFunction(int o)
{
while(o!=0)
{
int octalDigit = o%8;
o = o/8;
printf("%d",octalDigit);
}

}


int main()
{
int userInput,operation;
printf("enter any number: \n");
scanf("%d",&userInput);

printf("choose the operator:\n->1: For Binary Conversion,\n->2: For Octal Conversion,\n->0: To EXIT -_>\n");
scanf("%d",&operation);

switch (operation)
{
case 0:
printf("THANKYOU< \n");
break;

case 1:
binaryFunction(userInput);
break;

case 2:
octalFunction(userInput);
break;


default:
break;

}

return 0;
}

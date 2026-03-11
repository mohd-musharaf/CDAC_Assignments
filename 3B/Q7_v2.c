#include <stdio.h>


int binaryConversion(int a);
int octalConversion(int a);
int main()
{

int userInput,operationNo;
printf("enter any number: \n");
scanf("%d",&userInput);

printf("Choose:\n 1->Binary conversion,\n 2-> Octal Conversion, \n");
scanf("%d",&operationNo);

switch (operationNo)
{
case 1:
binaryConversion(userInput);
break;

case 2:
octalConversion(userInput);
break;
default:
printf("enter a valid number between 1-2 to convert the number");
}


return 0;

}


int binaryConversion(int a)
{

if(a==0)
{
return a;
}

else
{
binaryConversion(a/2);
printf("%d",a%2);
}
return 0;
}


int octalConversion(int a)
{

        if(a==0)
        {
                return a;
        }

        else
        {
                binaryConversion(a/8);
                printf("%d",a%8);
        }
        return 0;
}



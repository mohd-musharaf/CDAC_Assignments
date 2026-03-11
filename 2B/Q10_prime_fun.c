/*
   C program to print list of prime numbers
*/

#include <stdio.h>

int checkPrime(int);
void printPrime(int );



int main(void) {
    int range;
    printf("Enter range: ");
    scanf("%d",&range);

    printPrime(range);

    return 0;
}

int checkPrime(int num)
{
    int flag = 1;

    for(int i=2; i<=num/2; i++)
    {
        if(num%i==0)
        {
            flag=0;
            break;
        }
    }

return flag;
}

void printPrime(int range)
{
   for(int i=2; i<=range; i++)
    {
        int y=checkPrime(i);
        if(y==1)
        {
            printf("%d \n", i);
        }
    }
}

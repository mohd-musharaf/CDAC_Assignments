#include <stdio.h>

void powerOfN(int n,int m,int o);// function declaration.
int main()
{
int base,number,count=0;

printf("enter a base: and the number: to find it's exponential/power\n");
scanf("%d %d",&base,&number);

powerOfN(base,number,count);

return 0;
}


void powerOfN(int n,int m,int o)
{
if(m%n != 0)
{
// powerOfN(n,m/n,o);
printf("enter a valid number to know the power of %d\n",n);
}
else if(m/n == 1)
{

printf("The power is:%d\n",o+=1);

}
else
{
powerOfN(n,m/n,o+1);

}
}

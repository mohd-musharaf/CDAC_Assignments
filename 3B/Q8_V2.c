#include<stdio.h>
void binary(int t,int n,int count_0,int count_1);
int main()
{
int n;
printf("enter the number");
scanf("%d",&n);
int temp =n;
binary(temp,n,0,0);
}

void binary(int t,int n,int count_0,int count_1)
{

if(n!=0)
{
if(t==1)
{
count_1++;
}
else if(t ==0)
{
count_0++;
}
else if(t >2)
{
printf("Invalid input");
return;
}

}
binary(t,n/10,count_0,count_1);
printf("%d",count_0);
printf("%d",count_1);
}

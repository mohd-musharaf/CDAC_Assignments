#include<stdio.h>
int main()
{
	int i,j,s;
	int row=5;
	for(i=1;i<=row;i++)
	{
		for(s=1;s<=(row-i);s++)
		{
			printf(" ");
		}
		for(j=1;j<=i;j++){
		printf("%d",i);
		}
		printf("\n");
		
	}
	return 0;
}

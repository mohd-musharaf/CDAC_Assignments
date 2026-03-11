/*           1
           2 2 2
         3 3 3 3 3
       4 4 4 4 4 4 4
     5 5 5 5 5 5 5 5 5
     */
#include<stdio.h>
int main()
{
	int total_no_rows=6;
	int row,space,symbol;
	for(row=1;row<=(total_no_rows);row++)
	{
		for(space=1;space<=(total_no_rows-row);space++)
		{
			printf(" ");
		}
		for(symbol=1;symbol<=((2*row)-1);symbol++){
		printf(" %d",i);
		}
		printf("\n");
		
	}
	return 0;
}

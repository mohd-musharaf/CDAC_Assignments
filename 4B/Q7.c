/* Implement a C program where is a=10,b=20,c=30.Evaluate the following


260240130037
260240130025 */

#include<stdio.h>
int main()				//main function
	{
	int a=10,b=20,c=30,d;		//initialized
	
	
	d=++a,++b,++c,a+5;			
	printf("Output for first equation: %d ",d);		// pre-incremented 'a' will be printed
	
	d=(++a,++b,++c,a+5);
	printf("\nOutput for second equation: %d \n\n",d);   	/* incremented 'a' will be pre-incremented again here and as there is bracket 
								with help of comma(,) operator '5' will be added in a as per equation */
	return 0;
	}

/* Implement a C program using formatted I/O using printf(%5d,%05d,%-5d,%8.2f,%2f etc.)

260240130037
260240130025 */



#include<stdio.h>
int main()
{
	int a=24;		//input initialized
	float b= 4.56123;	//initializing 
	
	printf("\n\n'''Integer format specifiers'''\n\n");
	printf("Normal   : %d\n",a);  	//printing int as per input without any precision
	printf("with 5   : %5d\n",a);		//printing output with 3 spaces first then 2 input digit at ending ex:input=24 ouput-[   24]
	printf("with 05  : %05d\n",a);	//printing output with 3 zeros first then 2 input digit at ending ex:input=24 output will  be 00024
	printf("with -5  : %-5d\n",a);	//print output with 3 spaces from MSB and 2 input digit at LSB ex:input=24 output will  be [24   ]
	
	printf("\n\n'''Float format specifiers'''\n\n");
	printf("with 8.2  : %8.2f\n",b);	//8 digit output with 2 digit after precision.
	printf("with .2   : %.2f\n",b);	//normal output with 2 digit after precision.
	}
	

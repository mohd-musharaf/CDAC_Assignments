/* Write a program number format conversions(decimal,binary and octal)
260240130037
260240130025 
*/

#include<stdio.h>


int main()
{
      int num, temp, i=1;	//declaring variables
      int binary=0;	//declare and initialize binary as 0
      printf("Enter Decimal number:");
      scanf("%d", &num);	//taking input in decimal

      temp=num;	//equating or storing num in temp

      //decimal to binary

      while(temp>0) 	//while loop
      {
         binary=binary+(temp%2)*i;	//logic for binary
         temp=temp/2;
         i=i*10;
      }

      printf("Binary equivalent=%d\n", binary);	//output in binary using %d as format specifier

      //octal
      printf("octal equivalent=%o\n", num); //output in octal using %o as format specifier

      //Hexa decimal

      printf("hexa decimal equivalent=%x\n", num);	//output in hex using %x as format specifier

      return 0;
}










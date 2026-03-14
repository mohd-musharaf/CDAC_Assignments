/* Finding day of week based on reference date, say 1st Jan 1970 which is thursday
260240130037
260240130025 */

#include <stdio.h>

int dayCal(int day,int month,int year);	//function declaration for day,month,year
int Isleap(int n);	//function declaration 

int main()
{
int d,m,y;	//initialize
printf("enter date month year :");
scanf("%d",&d);	//user input of days
scanf("%d",&m);	//user input of month
scanf("%d",&y);	//user input of year

int i;

i = dayCal(d,m,y);	// function call
char*week[]={"Sunday","Monday","Tuesday","Wednesday","Thursday","Friday","Saturday"};
printf("Day on the provided date: %s",week[i]);	//input for date;

return 0;
}



int dayCal(int day, int month, int year)	// funct def
{
static int months[] = {31,28,31,30,31,30,31,31,30,31,30,31};
int total_days=0;

for(int i=1970; i<year;i++)
{
total_days += Isleap(i)?366:365;
}

for(int j=0;j<month-1;j++)
{
total_days += months[j];
if(Isleap(year) && j==1)
{
total_days +=1;
}
}

total_days+=day;
int day_index = (4+total_days-1)%7;

return day_index;
}


int Isleap(int n)	//function  def
{
if((n%4==0 && n%100!=0) ||(n%400 == 0))
{
return 1;
}
else
{
return 0;
}
 
}

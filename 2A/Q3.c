/*Implement a system to calculate the grade of the student based on marks in n subjects*/

#include<stdio.h>
int main()
{
	int n,i;
	float marks,total=0,average;			//initializing
	printf("Enter number of subjects:" );		//taking number of subjects as an input
	scanf("%d",&n);

	for(i=1;i<=n;i++)
	{
	printf("Enter marks for subject %d:",i);	//taking marks of subjects as an input
	scanf("%f",&marks);
	total += marks;
	}
	average = total/n;
	printf("Average Percentage: %.2f%%\n",average);     //calculating average 
	//print the Grade
	if(average >= 90)
	{
	printf("Grade: A+\n");					//printing grades
	}
	else if(average >=80)
	{
	printf("Grade: A\n");
	}
	else if(average >=70)
	{
	printf("Grade: B\n");
	}
	else if(average >=60)
	{
	printf("Grade: C\n");
	}
	else if(average >=50)
	{
	printf("Grade: D\n");
	}
	else if(average >=40)
	{
	printf("Grade: E\n");
	}
	else if(average <=39)
	{
	printf("Congratulations you are failed \n");		//printing fail result 
	}
	
}


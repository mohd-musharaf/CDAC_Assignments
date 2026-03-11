/*implement income tax calculator by considering best possible parameters (gender,senior citizen benefits, exemption for investment and other possible consideration).make use of if-else ladder.*/


#include <stdio.h>

int main()
{
    int age;		//three age groups 1.age<60 2.age<81 3.age>80
   
    //income details
    int income_from_salary;
    //deduction
    int deductions;
    int total_income;
    int taxable_income;
    char gender;
   
    //tax
    float base_tax;
    float final_tax;
   
    printf("!!INCOME TAX CALCULATOR!!\n");
   
    printf("Age:");
    scanf("%d",&age);
   
    printf("Gender:");
    scanf(" %c",&gender);
   
    printf("income from salary:");
    scanf("%d",&income_from_salary);
   
    printf("deductions:");
    scanf("%d",&deductions);
   
    taxable_income=income_from_salary-deductions;
    printf("taxable income=%d\n",taxable_income);

   
    if(age<60)
        {
           if(taxable_income<250000)
           {
            printf("income tax is zero");  
           }
           else if(taxable_income>250000 && taxable_income<500000)
           {
            total_income=taxable_income-250000;
            final_tax=total_income*0.05;
            printf("total income1= %d",total_income);
            printf("Final Tax:%.2f",final_tax);
           }
           else if(taxable_income>500000 && taxable_income<1000000)
           {
            total_income=taxable_income-500000;
            final_tax=(total_income*0.2)+12500;
              printf("total income1= %d",total_income);
            printf("Final Tax:%.2f",final_tax);
           }
           else if(taxable_income>1000000)
           {
            total_income=taxable_income-1000000;
            final_tax=(total_income*0.3)+112500;
            printf("Final Tax:%.2f",final_tax);
           }
           return 0;
        }
    else if(60<age && age<=80)
        {
         if(taxable_income<300001)
           {
            printf("income tax is zero");      
           }
           else if(taxable_income>300001 && taxable_income<500001)
           {
            total_income=taxable_income-300000;
            final_tax=total_income*0.05;
            printf("Final Tax:%.2f",final_tax);
           }
           else if(taxable_income>500000 && taxable_income<1000001)
           {
            total_income=taxable_income-500000;
            final_tax=(total_income*0.2)+10000;
            printf("Final Tax:%.2f",final_tax);
           }
           else if(taxable_income>1000000)
           {
            total_income=taxable_income-1000000;
            final_tax=(total_income*0.3)+110000;
            printf("Final Tax:%.2f",final_tax);
           }
           return 0;
        }
    else if(age>80)
        {
         if(taxable_income<500001)
           {
            printf("income tax is zero");      
           }
           else if(taxable_income>500001 && taxable_income<1000001)
           {
            total_income=taxable_income-500000;
            final_tax=(total_income*0.2);
            printf("Final Tax:%.2f",final_tax);
           }
           else if(taxable_income>1000000)
           {
            total_income=taxable_income-1000000;
            final_tax=(total_income*0.3)+100000;
            printf("Final Tax:%.2f",final_tax);
           }
           return 0;;
        }
   
   
   
}



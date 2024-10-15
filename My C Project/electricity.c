#include <stdio.h>
int main()
{
float units,bill;
printf("Enter number of electricity units: ");
scanf("%f",&units);
 if(units<=50)
 {bill=units*0.50;
 printf("Total electricity bill is %f rupees",bill);
 }
 else if(units>50&&units<=150)
 {
 bill=(50*0.50+((units-50)*0.75));
 printf("Total electricity bill is %f rupees",bill);
 }
 else if(units>150&&units<=250)
 {
 bill=(50*0.50+100*0.75+((units-150)*1.20));
 printf("Total electricity bill is %f rupees",bill);
 }
 else
 {
 bill=(50*0.50+100*0.75+100*1.20+((units-250)*1.50));
 printf("Total electricity bill is %f rupees",bill);
}
}



#include <stdio.h>
void main()
{
int number,original,reminder,power,sum;
printf("Enter a number");
scanf("%d",&number);
if(number<=0)
{
    printf("Number should be positive");
}
else
{
original=number;
power=number%10;
for(sum=0;number>0;)
{
reminder=number%10;
sum=sum+pow(reminder,power);
number=number/10;
}
if(original==sum)
{
    printf("%d is a Armstrong number",original);
}
else
{
    printf("%d is not a Armstrong number",original);
}
}
}

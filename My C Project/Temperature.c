#include <stdio.h>
void main()
{
    int option;
    float T,t;
    printf("Choose the conversion: \n");
    printf("1.Celsius to Fahrenheit\n");
    printf("2.Fahrenheit to Celsius\n  :");
    scanf("%d",&option);
    printf("\nEnter temperature");
    scanf("%f",&T);
    if(option==1)
    {
        t=(T*9/5)+32;
        printf("Temperature in Fahrenheit is %f",t);
    }
    else if(option==2)
    {
        t=(T-32)*5/9;
     printf("Temperature in Celsius is %f",t);
    }
    else
    {
        printf("INVALID OPTION CHOOSE THE WRITE ONE");
    }
}

#include <stdio.h>
void main()
{
int n,i,s=0;
printf("Enter a number");
scanf("%d",&n);
for(i=1;i<n;i++)
  {
    if(n%i==0)
       {
           s++;
       }
  }

       if(s==1)
    {
        printf("%d is prime number",n);
    }
    else
    {
       printf("%d is not a prime number",n);
    }
}

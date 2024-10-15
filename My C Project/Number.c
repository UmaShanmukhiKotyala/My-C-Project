#include <stdio.h>
void main()
{
int x,y,a,b,n;
printf("Enter the Range of number: ");
scanf("%d%d",&x,&y);
printf("Enter a,b: ");
scanf("%d%d",&a,&b);
for(n=x;n<=y;n++)
{
   if(n%a==0&&n%b==0)
    {
      printf("\n%d is between %d and %d and divisible by %d and %d",n,x,y,a,b);
    }
}
}
N

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
     s=s+i;
 }
}
    if(n==s)
    printf("%d is a perfect number",n);
    else
    printf("%d is not a perfect number",n);
}


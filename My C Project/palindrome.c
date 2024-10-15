#include <stdio.h>
void main()
{
int number,original,remainder,reverse=0;
printf("Enter a number");
scanf("%d",&number);
if(number<0)
    {
    printf("Number cannot be negitive ");
    }
    else
{
       original=number;
  while(number!=0)
   {
   remainder=number%10;
   reverse=reverse*10+remainder;
   number/=10;
   }
}
  if(original==reverse)
  {
    printf("%d is a PALINDROME number",original);
  }
  else
  {
      printf("%d is NOT A PALINDROME number",original);
  }
}


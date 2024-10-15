#include <stdio.h>
void main()
{
float n1,n2,n3,n4;
printf("Enter four numbers");
scanf("%f%f%f%f",&n1,&n2,&n3,&n4);
if(n1>n2)
 {
 if(n1>n3)
   {
    if(n1>n4)
    {
     printf("%f is largest number",n1);
    }
    else
    {
    printf("%f is largest number",n4);
    }
   }
 else
   {
    if(n3>n4)
    {
     printf("%f is largest number",n3);
    }
    else
    {
     printf("%f is largest number",n4);
    }
   }
 }
else
 {
 if(n2>n3)
   {
    if(n2>n4)
     {
      printf("%f is largest number",n2);
     }
    else
     {
     printf("%f is the largest number",n4);
     }
   }
  else
   {
    if(n3>n4)
     {
      printf("%f is the largest number",n3);
     }
    else
     printf("%f is the largest number",n4);
   }
 }
}

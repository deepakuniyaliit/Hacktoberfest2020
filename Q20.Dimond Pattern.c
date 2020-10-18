#include<stdio.h>

int main()
{
 int a;
 printf("enter size : ");
 scanf("%d",&a);
 for(int i=1;i<=a;i++)
 {
   for(int j=a;j>=i;j--)
   {
     printf(" ");
   }
   for(int k=1;k<=i;k++)
   {
     printf("* ");
   }
   printf("\n");
 }
 int max=1;
  for(int i=a;i>=1;i--)
 {
   for(int j=1;j<=max;j++)
   {
     printf(" ");
   }
   for(int k=1;k<=i;k++)
   {
     printf("* ");
   }
   printf("\n");
   max++;
 }

}

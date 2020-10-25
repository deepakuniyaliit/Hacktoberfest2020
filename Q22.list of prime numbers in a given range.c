#include<stdio.h>



int main()
{
 printf("enter a range : ");
 int a,count=0;
 scanf("%d",&a);
 printf("The ranges are as follows : ");
 for(int i=1;i<=a;i++)
 {
   for(int j=1;j<=i;j++)
   {
     if(i%j==0)
     {
       count++;
      
     }
    }
    if(count==2)
    {
      printf("%d ",i);
    }
  count=0;
 }
 
}

#include<stdio.h>
#include <string.h>
int fact(int value);

int main()
{
 printf("enter a number to find the factorial : ");
 int a,result=0;
 scanf("%d",&a);
 result=fact(a);
  printf("factorial of %d is : %d",a,result);


}
int fact(int value)
{
  if(value==1)
  {
    return 1;
  }
  return value*fact(value-1);
}

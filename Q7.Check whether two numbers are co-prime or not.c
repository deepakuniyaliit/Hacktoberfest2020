#include<stdio.h>


int main()
{
	 int num1, num2, h, i;
	 
	 printf("Enter two numbers: ");
	 scanf("%d%d", &num1, &num2);
	
	 
	 for(i=1;i<=num1;i++)
	 {
	  if(num1%i==0 && num2%i==0)
	  {
	   h = i;
	  }
	 }
	
	 
	 if(h == 1)
	 {
	  printf("%d and %d are co-prime.", num1, num2);
	 }
	 else
	 {
	  printf("%d and %d are not co-prime.", num1, num2);
	 }
	 
	 
}

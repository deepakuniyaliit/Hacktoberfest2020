#include <iostream>
#include <string.h>
#include<stdlib.h>
using namespace std;

int main()
{
   char str[30];
   int i;
   cout<<"Enter the String : "; 
   cin.getline(str,30);
   for(i=0;i<=strlen(str);i++){ 
      if(str[i]>=97 && str[i]<=122){
		str[i]=str[i]-32;
      }
   }
cout<<"The entered string in uppercase: "<<str;
return 0;
}

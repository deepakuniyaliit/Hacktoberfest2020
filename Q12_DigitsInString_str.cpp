//Program to find the number of digits in a string.

#include <iostream>
#include<string>
using namespace std;
int main(){
   char str[20];
   int count=0,i;
   cout<<"Enter any string: ";  //message for the user for enter the string.
   cin.getline(str,20);
   for(i=0;str[i]!='\0';i++){   //'0' represents the end of the string.
     if(str[i]>='0' && str[i]<='9'){
        count++;
    }   
  }
  cout<<"Digits in String: " <<count++<<endl;
  return 0;
  }

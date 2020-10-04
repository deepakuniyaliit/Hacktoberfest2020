//Program to find the no of words in a string 

#include<iostream>
#include<string>
using namespace std;
int main ()
{
    char str[50];
    int count=0,i; 
    cout<<"Enter a string : ";    //message for user to enter a string
    gets(str);
    for(i=0;str[i]!='\0';i++)     //'\0' represents end of the string
    {
        if(str[i]==' ')
            count++;    
    }
    cout<<"Number of words in the string are: "<<count + 1;
    return 0;
}

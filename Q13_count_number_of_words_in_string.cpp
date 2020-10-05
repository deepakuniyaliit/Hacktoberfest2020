//Program to find the no of words in a string 

#include<stdio.h>
int main()
{
      char s[150];
      int i, word=1;

      printf("Enter a string: ");
      scanf("%[^\n]",s);

      for(i = 0; s[i] != '\0'; ++i)
      {
          if(s[i]==' '&& s[i+1]!=' ') word++;
      }

      // In input there is many spaces between words e.g "hello     world"
      if(s[i-1]==' ')word--;
      if(s[0]==' ')word--;
      if(s[0]=='\0')word--;

      printf("Word: %d",word);
      return 0;
}

/*
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

#include<iostream>
#include<cstring>
using namespace std;
void minmaxWord(string str)
{
   int length = str.length();
   int si=0,ei=0;
   int minlen=length,maxlen=0,currlen;
   string smallest,largest;
   while (ei<=length)
    {
      if (str[ei]!='\0' && str[ei]!=' ')
         ei++;
      else
        {
         currlen=ei-si;
         if (currlen<minlen)
         {
            smallest=str.substr(si,currlen);
            minlen=currlen;
         }
         if (currlen>maxlen)
         {
            largest=str.substr(si,currlen);
            maxlen=currlen;
         }
         ei++;
         si=ei;
      }
   }
   cout<<"Minimum length word:"<<smallest<<"\n";
   cout<<"Maximum length word:"<<largest;
}
int main()
{
   string str;
   cout<<"Enter String:";
   getline(cin, str);
   minmaxWord(str);
}

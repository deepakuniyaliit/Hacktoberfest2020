#include<iostream>
using namespace std;
int main()
{
int i;
char a[100];
cout<<"Enter a string"<<endl;
cin>>a;
for(i=0;a[i]!='\0';i++)
{
    if(a[i]>='a' && a[i]<'z')
      a[i]=a[i]-32;
}
cout<<"Upper case string is : ";
cout<<a;
}

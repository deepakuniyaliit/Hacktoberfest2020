//Program to find the cube root of a number.

#include <iostream>
#include <cmath>
using namespace std;
int main()
{
  int num, res;
  cout<<"Enter any number : ";       //message for user to enter the no.
  cin>>num;
  res=cbrt(num);
  cout<<"\nCube root of " <<num<<" is: "<<res;
}

#include<iostream>
using namespace std;
int BinaryToDecimal(int n) 
{
   int decimal = 0;
   int base = 1;
   int temp = n;
   while (temp) 
   {
      int lastDigit = temp % 10;
      temp = temp/10;
      decimal += lastDigit*base;
      base = base*2;
   }
   cout<<"Decimal conversion of "<<n<<" is "<<decimal<<endl;;
}
int main()
{
  BinaryToDecimal(100);
  return 0;
}

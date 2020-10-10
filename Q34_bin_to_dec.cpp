#include<iostream>
using namespace std;
void BinaryToDecimal(int n) 
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
   int m;
   cout<<"Enter a number:";
   cin>>m;
   BinaryToDecimal(m);
   return 0;
}

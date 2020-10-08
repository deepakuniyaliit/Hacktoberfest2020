int BinaryToDecimal(int n) 
{
   int decimal = 0;
   int base = 1;
   int temp = n;
   while (temp) 
   {
      int lastDigit = temp % 10;
      temp = temp/10;
      decimalNumber += lastDigit*base;
      base = base*2;
   }
   cout<<"Decimal conversion of"<<n<<" is "<<decimalNumber<<endl;;
}
int main()
{
  BinaryToDecimal(100);
  return 0;
}

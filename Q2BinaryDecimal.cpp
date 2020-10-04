// C++ program to convert binary to decimal
#include <iostream>
using namespace std;

// Function to convert binary to decimal
int binaryToDecimal(int n)
{
    int num=n;
    int decimal=0;
    // Initializing base value to 1, i.e 2^0
    int base = 1;
    int temp = num;
    while(temp){
        int last_digit=temp%10;
        temp=temp / 10;
        decimal += last_digit * base;
        base = base * 2;
    }
    return decimal;
}

// Driver program to test above function
int main()
{
    int num;
    cout<<"Enter binary number:";
    cin>>num;
    cout<<"Number in Decimal form:";
    cout << binaryToDecimal(num) << endl;
}

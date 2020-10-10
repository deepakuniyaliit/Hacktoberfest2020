// C++ program to convert binary to decimal
#include <iostream>
using namespace std;
 
// Function to convert binary to decimal
int binaryToDecimal(int n)
{
    int num = n;
    int decimal_value = 0;
    
    cout << "Enter the binary number: ";
    cin >> num;
 
    // Initializing base value to 1, i.e 2^0
    int base = 1;
 
    int temp = num;
    while (temp) {
        int last_digit = temp % 10;
        temp = temp / 10;
 
        decimal_value += last_digit * base;
 
        base = base * 2;
    }
 
    return decimal_value;
}
 
// Driver program to test above function
int main()
{
    int num;

    cout << binaryToDecimal(num) << endl;
}

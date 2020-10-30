#include <iostream> 
using namespace std; 

// Program to convert decimal to binary 
void dectobin(int n) 
{ 
	// array to store binary number 
	int binaryNum[64]; 
	// counter for binary array 
	int i = 0; 
	while (n > 0)
	{ 
		// storing remainder in binary array 
		binaryNum[i] = n % 2; 
		n = n / 2; 
		i++; 
	} 
	// printing binary array in reverse order 
	for (int j = i - 1; j >= 0; j--) 
		cout << binaryNum[j]; 
}
int main() 
{ 
	int n;
    cout<<"Enter the Decimal value: ";
    cin>>n;
    cout<<"Binary value : ";
    dectobin(n); 
} 

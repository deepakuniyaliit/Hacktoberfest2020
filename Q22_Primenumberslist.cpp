// C++ program to find the prime numbers between a given interval
#include<iostream>
using namespace std;

// Function to print prime number in given range
void primeInRange(int L, int U)
{
    int flag;
    // Traverse each number in the interval with the help of for loop
    for (int i=L;i<=U;i++) {
        // Skip 0 and 1 as they are neither prime nor composite
        if (i == 1 || i == 0)
            continue;
        // flag variable to tell if i is prime or not
        flag = 1;
        for (int j=2;j<=i/2;j++) {
            if (i % j == 0) {
                flag=0;
                break;
            }
        }
        // flag = 1 means i is prime
        // and flag = 0 means i is not prime
        if (flag == 1)
            cout << i << " ";
    }
}

// Driver Code
int main()
{
    // Given Range
    int L,U;
    cout<<"Enter the Range:";
    cin>>L>>U;
    cout<<"The list of prime numbers in given range:";
    // Function Call
    primeInRange(L,U);
}

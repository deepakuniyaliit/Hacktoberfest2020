// C++ program to find GCD of n numbers
#include<iostream>
using namespace std;
// Function to return gcd of a and b
int gcd(int a,int b)
{
    if (a==0)
        return b;
    return gcd(b%a,a);
}

// Function to find gcd
int findGCD(int arr[],int n)
{
    int result=arr[0];
    for(int i=1;i<n;i++)
    {
        result=gcd(arr[i],result);
        if(result == 1)
        {
           return 1;
        }
    }
    return result;
}

// Driver code
int main()
{
    int n;
    cout<<"Enter size of array:";
    cin>>n;
    int arr[n];
    cout<<"Enter numbers: ";
    for(int i=0;i<n;i++)
    {
        cin>>arr[i];
    }
    cout<<"GCD of numbers: ";
    cout<<findGCD(arr,n);
    return 0;
}

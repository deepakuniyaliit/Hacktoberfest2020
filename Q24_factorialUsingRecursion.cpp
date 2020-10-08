#include<bits/stdc++.h>

using namespace std;


//Function to calculate factorial of a number using recursion
int factRecursion(int n)
{
    if(n>1)
    return n * factRecursion(n-1);
    else
    return 1;     
}

//Driver Code
int main()
{
    int n;
    cin>>n;
    cout<<factRecursion(n);
}

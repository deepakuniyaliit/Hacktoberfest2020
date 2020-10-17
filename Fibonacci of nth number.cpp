#include<iostream>

using namespace std;

//Time Complexity - O(N)

int fib(int N)
{
    if(N==0)
    {
        return 0;
    }
    //If N is 1 it returns 1
    if(N==1)
    {
        return 1;
    }
    return fib(N-1)+fib(N-2);

}

int main()
{
    int N;
    cout<<"Enter the value of N: ";
    cin>>N;
    cout<<"Fibonacci number of Nth term is "<<fib(N);
    return 0;
}

#include<iostream>

using namespace std;

//Fibonacci of nth number - fibonacci sequence starts from 0,1,1,2,3,5.......

//fibonacci sequence - first and second number is equal to third number and second and third number is equal to fourth number ......

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
    cout<<"Fibonacci number of Nth term is:"<<fib(N);
    return 0;
}

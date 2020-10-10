#include<iostream>

using namespace std;

// for arithematic  progression there will a starting number , common difference and ending number
// AP = a+d till n;
int main()
{
    int N; // N number of terms if N is 5 output will be five terms
    cin >>N;
    int starting_number = 2;
    int common_difference = 2;
    for(int i=0;i<N;i++)
    {
        cout <<starting_number<<" ";
        starting_number = starting_number + common_difference;
    }

}



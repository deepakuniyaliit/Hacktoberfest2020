// C++ program to find the prime numbers between a given interval
#include<iostream>
using namespace std;
int main()
{
int n,i,lower,upper,c;
 cout<<"Enter the Range : ";
cin>>lower>>upper;

    cout<<"The list of prime numbers in given range:";
    // Traverse each number in the interval with the help of for loop
    for ( n=lower;n<=upper;n++) {
        c=0;


        for (i=2;i<=n/2;i++) {
            if (n % i == 0) {
                c++;
                break;
            }
        }
        if(c==0 && n!=1)
            cout<<n<<" ";
    }
    }



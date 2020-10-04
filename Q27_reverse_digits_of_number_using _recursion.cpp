// Program to print the reverse of a number using recursion

#include<iostream>
using namespace std;

// Recursive function 

int rev(int n){
    int rev=0;
    while(n>0){                     // Breaking conditions
        rev=rev*10+n%10;
        n/=10;
    }
    return rev;
}

int main(){
    int n,r;
    cout<<"Enter number: ";
    cin>>n;
    r=rev(n);
    cout<<"Reversed number: "<<r;
    return 0;
}

//Program to compute sum of digits of a number

#include<iostream>
using namespace std;
// Recurrive function for calculation
int sumofdigits(int n){
    if(n==0)         // break condition
    return 0;
    return (n%10 + sumofdigits(n/10));
}
int main(){
    int num;
    cout<<"Enter number: ";
    cin>>num;
    int s=sumofdigits(num); // function call
    cout<<"Sum of digits of number "<<num<<" is "<<s<<endl;
    return 0;
}

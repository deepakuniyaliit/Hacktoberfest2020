#include<iostream>
using namespace std;
int fact(int n){
    if((n==0)||(n==1))
    return 1;
    else
    return n*fact(n-1);
}
int main(){
    int x;
    cout<<"Enter an integer to calculate its factorial: ";
    cin>>x;
    fact(x);
    cout<<"Factorial of "<<x<<" "<<"is"<<" "<<fact(x)<<endl;
    return 0;
}

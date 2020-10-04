#include<iostream>
using namespace std;
int sumofdigits(int n){
    if(n==0)
    return 0;
    return (n%10 + sumofdigits(n/10));
}
int main(){
    int num;
    cout<<"Enter number: ";
    cin>>num;
    int s=sumofdigits(num);
    cout<<"Sum of digits of number "<<num<<" is "<<s<<endl;
    return 0;
}

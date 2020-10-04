#include<iostream>
using namespace std;
// function to return the factorial of a number
int fact(int n){
    if(n==0){ //handling zero case
        return 1;
    }
    int sum=1;
    for(int i=1;i<=n;i++){
        sum*=i;
    }
    return sum;
}
//main function
int main() {
    int n,d,res=0;
    cout<<"Enter a number:";
    cin>>n;
    if(n==0){
    cout<<fact(n);
    return 0;
    }
    while(n){
        d=n%10; // to obtain the last digit of the number
        res+=fact(d); // adding the factorial value in the res variable
        n=n/10; // to remove the last digit and continue the process till number >0
    }
    cout<<res; // print the desired result
}
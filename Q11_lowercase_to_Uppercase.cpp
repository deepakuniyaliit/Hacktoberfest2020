#include<iostream>
using namespace std;
int main() {
    int i,n;
    string str;
    cin>>str; //taking input of string
    n=str.length(); //computing length of string
    for(i=0;i<n;i++){
        str[i]^=32; //changing case of each letter separately using bit manipulation.
    }
    cout<<str; //printing the modified string
}
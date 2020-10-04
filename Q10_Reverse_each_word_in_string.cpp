// Program to print each word of the enterred string in reverse

#include<bits/stdc++.h>
#include<string>
using namespace std;

// Function for reversing

void revwords(string str){
    string s;
    stringstream i(str);  // Making a string stream
    while(i>>s){
        reverse(s.begin(),s.end());   // Reverse function to revere the word
        cout<<s<<" ";
    }
}
int main(){
    string s;
    cout<<"Enter the string: ";
    getline(cin,s);   // Inputting the string
    revwords(s);
    return 0;
}

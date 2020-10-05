#include<bits/stdc++.h>

using namespace std;

//FUNCTION TO CALCULATE THE NUMBER OF WORDS IN A GIVEN STRING
void nosOfWord(string str)
{
    int n;
    n = str.length();
    int word=1;
    for(int i=0;i<n;i++)
    {
        if(str[i]==' ')
        word++;
    }
    cout<<word;
       
}

//DRIVER CODE
int main()
{
    string str;
    getline(cin, str);
    nosOfWord(str);
}

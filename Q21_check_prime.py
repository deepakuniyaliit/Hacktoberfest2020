#include <bits/stdc++.h>
using namespace std;

int main() 
{
	int n,i,c=0;
	cin >> n;
	for(i=2;i<n;i++)
	{
		if(n%i==0)
		c++;
	}
	if(c==0)
	cout << "PRIME<< "\n";
	else
	cout << "NOT PRIME<< "\n";
	return 0;
}

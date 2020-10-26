#include<iostream>
using namespace std;
// Print matrix in snake pattern
int main()
{
	int n,m,i,j;
	cout<<"Enter the count of row and column matrix: ";
	cin>>m>>n;
	int arr[m][n];
	for(i=0;i<m;i++) //Rows
	{
		for(j=0;j<n;j++) //columns
		{
			cin>>arr[i][j];
		}
	}
	cout<<"Snake pattern: ";
	for(i=0;i<m;i++) 
	{
		if(i%2==0) //If row is even then print as it is.
			for(j=0;j<n;j++)
				cout<<" "<<arr[i][j];
		else
			for(j=n-1;j>=0;j--) //If row is odd then print it in reverse format.
				cout<<" "<<arr[i][j];
	}
	return 0;
}
	

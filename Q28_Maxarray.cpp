#include<iostream>
using namespace std;
int recursiveMinimum(int arr[],int first,int last)
{
    static int max=arr[first];
    if(max<=arr[first])
    {
        max=arr[first];
    }
    if(first==last)
    {
        return max;
    }
    recursiveMinimum(arr,first+1,last);
    return max;
}
int main()
{
    int n;
    cout<<"Enter the size of array:";
    cin>>n;
    int arr[n];
    cout<<"Enter the elements of array:";
    for(int i=0;i<n;i++)
    {
        cin>>arr[i];
    }
    int max=recursiveMinimum(arr,0,n-1);
    cout<<"The maximum element of the array is: "<<max;
}

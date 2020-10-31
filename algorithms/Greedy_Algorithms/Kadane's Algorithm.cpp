//Implemented in C++14

#include <iostream>
using namespace std;

// Utility function to return maximum number present in given array
int maximum(int arr[], int n)
{
	int res = arr[0];
	for (int i = 1; i < n; i++)
		res = max(res, arr[i]);

	return res;
}

// Function to find contiguous sub-array with the largest sum
// in given set of integers
int kadane(int arr[], int n)
{
	// find maximum element present in given array
	int max_num = maximum(arr, n);

	// if array contains all negative values, return maximum element
	if (max_num < 0)
		return max_num;

	// stores maximum sum sub-array found so far
	int max_so_far = 0;

	// stores maximum sum of sub-array ending at current position
	int max_ending_here = 0;

	// traverse the given array
	for (int i = 0; i < n; i++)
	{
		// update maximum sum of sub-array "ending" at index i (by adding
		// current element to maximum sum ending at previous index i-1)
		max_ending_here = max_ending_here + arr[i];

		// if maximum sum is negative, set it to 0 (which represents
		// an empty sub-array)
		max_ending_here = max(max_ending_here, 0);

		// update result if current sub-array sum is found to be greater
		max_so_far = max(max_so_far, max_ending_here);
	}

	return max_so_far;
}

int main()
{
	int n;
  cout<<"Enter number of elements";
  cin>>n;
  int arr[n];
  cout<<"\nEnter elements in array";
  for(int i = 0;i < n;i++)
  { cin>>arr[i]; }
	cout << "The sum of contiguous sub-array with the largest sum is " <<
			kadane(arr, n);

	return 0;
}

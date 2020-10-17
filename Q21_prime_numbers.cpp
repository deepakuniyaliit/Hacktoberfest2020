/* C++ program to find the prime numbers 
 between a given interval */
#include <bits/stdc++.h> 
#include<cmath>
using namespace std; 

/* Function for print prime 
 number in given range */
void primeInRange(int L, int R) 
{ 
	int flag; 

	/* Traverse each number in the 
	 interval with the help of for loop */
	for (int i = L; i <= R; i++) { 

		/* Skip 0 and 1 as they are 
		 niether prime nor composite */
		if (i == 1 || i == 0) 
			continue; 

		/* flag variable to tell 
		 if i is prime or not */
		flag = 1; 

		/* Iterate to check if i is prime 
		 or not */
		int square_root=sqrt(i);
		for (int j = 2; j <= square_root; ++j) { 
			if (i % j == 0) { 
				flag = 0; 
				break; 
			} 
		} 

		/* flag = 1 means i is prime 
		 and flag = 0 means i is not prime */
		if (flag == 1) 
			cout << i << " "; 
	} 
} 

// Driver Code 
int main() 
{ 
	// Given Range 
	int L = 1; 
	int R = 20; 

	// Function Call 
	primeInRange(L, R); 

	return 0; 
}

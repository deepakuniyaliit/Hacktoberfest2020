#include <iostream> 
using namespace std; 
  
// Function for stooge sort 
void stoogesort(int a[], int first, int last) 
{ 
    if (first >= last) 
        return; 
    // If first element is smaller than last, 
    // swap them 
    if (a[first] > a[last]) 
        swap(a[first], a[last]); 
    if (last - first + 1 > 2) { 
        int t = (last - first + 1) / 3; 
        // recursively sort the first 2/3 elements 
        stoogesort(a, first, last - t); 
        // recursively sort the last 2/3 elements 
        stoogesort(a, first + t, last); 
        // recursively sort the first 2/3 elements again to confirm 
        stoogesort(a, first, last - t); 
    } 
} 
   
int main() 
{ 
    int a[] = {2, 4, 5, 3, 1}; 
    int n = 5; 
    // Stooge Sort function called
    stoogesort(a, 0, n - 1);
    // Display
    for (int i = 0; i < n; i++) 
        cout << a[i] << " "; 
  
    return 0; 
} 

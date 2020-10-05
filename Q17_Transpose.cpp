#include <iostream>
using namespace std;

int main() {
   int row,col,i,j;
   cout<<"Enter rows and columns of matrix: ";
   cin>>row>>col;
   int arr[row][col],transpose[col][row];
   // Storing matrix elements
   cout<<"Enter elements:"<<endl;
   for (i=0;i<row;i++) {
      for(j=0;j<col;j++){
         cin>>arr[i][j];
      }
   }

   // Printing the a matrix
   cout <<"\nEntered Matrix: "<< endl;
   for (i=0;i<row;i++) {
      for (j=0;j<col;j++) {
         cout <<" "<<arr[i][j];
         if (j==col-1)
            cout<<endl<<endl;
      }
   }

   // Computing transpose of the matrix
   for(i=0;i<row;i++)
      for(j=0;j<col;j++){
         transpose[j][i]=arr[i][j];
      }

   // Printing the transpose
   cout<<"\nTranspose of Matrix: " <<endl;
   for(i=0;i<col;i++)
      for(j=0;j<row;j++){
         cout<<" "<<transpose[i][j];
         if(j==row - 1)
            cout << endl << endl;
      }
}

// Program to check the number palindrome or not using recursion.

#include<iostream>
using namespace std;

// function to check palindrome number or not by giving reverse number
int checkPalindrome(int num){

   static int reverseNum=0,rem;

   if(num!=0){
      rem=num%10;
      reverseNum=reverseNum*10+rem;
      checkPalindrome(num/10);
   }

   return reverseNum;
}
//driver code
int main(){
   int num, reverseNum;

   cout<<"Enter a number: ";
   cin>>num;

   reverseNum = checkPalindrome(num);

   if(num==reverseNum)  // checking whether the given output by the function matches the input
      cout<<num<<" is a palindrome number";  
   else
      cout<<num<<"is not a palindrome number";

   return 0;
}
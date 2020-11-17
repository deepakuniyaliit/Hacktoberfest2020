#include<iostream>
#include<stdio.h>
using namespace std;

int main(){
	for(int i =0 ; i<100 ;i++)
	{
		if(i%15==0)
			cout<<"threexfivex"<<endl;
		else if((i%3)==0)
			cout<<"threex"<<endl;
		else
			cout<<("%d",i)<<endl;
	}
	
return 0;
}

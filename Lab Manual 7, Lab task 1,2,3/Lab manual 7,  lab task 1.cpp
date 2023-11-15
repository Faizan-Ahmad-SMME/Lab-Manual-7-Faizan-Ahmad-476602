//---------------------------------------------------------------------------------------------------------------------------------------------------
//This code will take 10 integer inputs from the user, store them in an array, and print them in the order they were read.

#include<iostream>
using namespace std;
int main() {
	
	int a[10];     // integer array is declared since we are only dealing with integers
	
	cout<<"Enter 10 numbers:"<<endl;   // this is a prompt that asks the user for 10 integer inputs
	
	for ( int i=0; i<10; i++ ) {       // this for loop is used to cycle through each space in the array so that it may be filled with user inputs
		cin>>a[i];
	}
	cout<<endl;
	for ( int i=0; i<10; i++ ) {       // this loop prints each integer in the array from space 0 to 9 (total 10)
		cout<<a[i]<<" ";               // space is printed between each number so that its eaiser to distingush between numbers
	}
	return 0;
}

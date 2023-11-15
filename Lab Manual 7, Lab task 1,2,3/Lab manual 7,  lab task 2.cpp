//---------------------------------------------------------------------------------------------------------------------------------------------------
//This code will find the sum and product of all elements of an array with 5 integer elements.

#include<iostream>
using namespace std;
int main() {
	
	int a[5], sum = 0, product = 1;     // integer array is declared since we are only dealing with integers
	
	cout<<"Enter 5 numbers:"<<endl;   // this is a prompt that asks the user for 10 integer inputs
	
	for ( int i=0; i<5; i++ ) {       // this for loop is used to cycle through each space in the array so that it may be filled with user inputs
		cin>>a[i];
	}
	
	for ( int i=0; i<5; i++ ) {
		sum = a[i] + sum;
		product = product * a[i];
	}
	
	cout<<"The sum of the numbers inputed is: "<<sum<<endl;
	cout<<"The product of the numbers inputed is: "<<product<<endl;
	return 0;
}

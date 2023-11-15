//---------------------------------------------------------------------------------------------------------------------------------------------------
//This code will take 10 integer inputs from the user, store them in an array, and print them in the order they were read.

#include<iostream>
using namespace std;
int main() {
	
	int n, half;        // integer n represent the number of rows
	 					// integer half represents the half of n, since its declared integer it will always be a number less then the actual half
						// if n = 5 , n/2 = 2.5, half = 2
						// this is strategic, since in a array the elements are labeled starting from zero, so the the half of an array with n elements
						// is (0,1,2,3,4) 2 hence half = 2 
	
	cout<<"Enter the number of rows of your diamond"<<endl;		// prompt asking for number of rows
	cin>>n;														// read number of rows
	char a[n];     							// declareing a character array
	half = n/2;								// determining half
	
	for ( int i = 0; i<n; i++ ) {			// this loop replaces all the elements of the array with ' ' (spaces)
		a[i] = ' ';
	}
	
	for ( int i = 0; i<= half; i++ ) {		// this loop prints each row
		
		a[half] = '*';				// in a diamond the middle element is always a '*' hence we replace the middle element with a '*'
		a[half - i] = '*';			// replace the element on the left with a *, initial value of i is zero so the first row prints only with a * in the centre
		a[half + i] = '*';			// replace the element on the right with a *
		
		for ( int j = 0; j<n; j++ ) {		// this row prints each column
		cout<<a[j];	
	}
	cout<<endl;						// end line is used to move on to the next row
	}

	for ( int i = half; i >= 1; i-- ) {		// this loop prints the rows below the middle row
											// hence we start from half and move backwords to 0, reverse the upper process
		a[half - i] = ' ';					// replace the * with ' ' from the edges inwords ( both from left and right hand side
		a[half + i] = ' ';
		for ( int j = 0; j<n; j++) {        // print each column
			cout<<a[j];
		}
		cout<<endl;					// endl used to move onto the next row
	}
	
	
	
	return 0;
}











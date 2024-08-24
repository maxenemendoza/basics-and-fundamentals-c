#include <iostream>
using namespace std;

/* Write a program that accepts elements for 2
	arrays and merge the elements into another array in
	descending order. Assume that each array can take up to 10
	elements. */

int main (){
	int firstArrayNo;
	int secondArrayNo;
	int i;
	
	// CREATE FIRST ARRAY
	do {
		cout << "Enter the number of elements in the first array (up to 10): ";
		cin >> firstArrayNo;
	
		if (firstArrayNo > 10)
			cout << "Enter a number less than or equal to ten." << endl; 
			cout << endl;
	} while (firstArrayNo > 10);
	
	int firstArray[firstArrayNo];
	
	// INPUT ELEMENTS OF FIRST ARRAY
	for (int i=0; i<firstArrayNo; i++){
		cout << "Enter element " << i+1 << ": ";
		cin >> firstArray[i];
	}
	
	// DISPLAY ELEMENTS OF FIRST ARRAY
	cout << endl;
	cout << "The elements of the first array are ";
	
	for (int i=0; i<firstArrayNo; i++){
		cout << firstArray[i] << " ";
	}
	
	cout << endl << endl;
	
	// CREATE SECOND ARRAY
	do {
		cout << "Enter the number of elements in the second array (up to 10): ";
		cin >> secondArrayNo;
	
		if (secondArrayNo > 10)
			cout << "Enter a number less than or equal to ten." << endl; 
			cout << endl;
	} while (secondArrayNo > 10);
	
	int secondArray[secondArrayNo];
	
	// INPUT ELEMENTS OF SECOND ARRAY
	for (int i=0; i<secondArrayNo; i++){
		cout << "Enter element " << i+1 << ": ";
		cin >> secondArray[i];
	}
	
	// DISPLAY ELEMENTS OF SECOND ARRAY
	cout << endl;
	cout << "The elements of the second array are ";
	
	for (int i=0; i<secondArrayNo; i++){
		cout << secondArray[i] << " ";
	}
	
	cout << endl;
	
	// CREATE THIRD ARRAY
	int thirdArrayNo = firstArrayNo + secondArrayNo;
	int thirdArray[thirdArrayNo];
	
	// MOVE ELEMENTS OF FIRST ARRAY TO THIRD ARRAY
	for (int i=0; i<firstArrayNo; i++){
		thirdArray[i] = firstArray[i];
	}
	
	// MOVE ELEMENTS OF SECOND ARRAY TO THIRD ARRAY
	for (int i=0; i<secondArrayNo; i++){
		thirdArray[i + firstArrayNo] = secondArray[i];
	}
	
	// SORT ELEMENTS OF THIRD ARRAY IN DESCENDING ORDER
	for (int i=0; i<thirdArrayNo - 1; i++){
		for (int j=i+1; j<thirdArrayNo; j++){
			if (thirdArray[i]<thirdArray[j]){
				int temp = thirdArray[i];
				thirdArray[i] = thirdArray[j];
				thirdArray[j] = temp;
			}
		}
	}
	
	// DISPLAY ELEMENTS OF THIRD ARRAY
	cout << endl;
	cout << "The elements of the third array are ";
	
	for (int i=0; i<thirdArrayNo; i++){
		cout << thirdArray[i] << " ";
	}
}
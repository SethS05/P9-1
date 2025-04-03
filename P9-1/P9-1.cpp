/*
* Author: Seth Skinner
* File: P9-1
* Date: 4/2/2025
* 
* Description: initializes an array with ten 4-digit random integers and then prints five lines of output,
* containing every element in order of appearance in the array, every element at an even index, every even element,
* all elements in reverse order, and only the first and last element.
*/

#include<iostream>
#include <cstdlib>
#include <ctime>

using namespace std;

void getEvenIndexElements(int arr1[], int size, int evenIndexArray[], int& evenIndexSize);
void findEvenElements(int arr1[], int size, int evenArray[], int& evenSize);

int main()
{
	int arr1[10];
	int evenIndexArray[10];
	int evenIndexSize;
	int evenArray[10];
	int evenSize;

	srand(time(0));

	const int size = 10;

	cout << "The random integers: ";

	for (int i = 0; i < size; i++) {
		arr1[i] = 1000 + rand() % 9000;
		cout << arr1[i] << " ";
	}

	// Get values for even index array and print them
	getEvenIndexElements(arr1, size, evenIndexArray, evenIndexSize);

	cout << "\nEven Indices: ";

	for (int i = 0; i < evenIndexSize; i++) {
		cout << evenIndexArray[i] << " ";
	}

	// Get values for even array elements and print them
	findEvenElements(arr1, size, evenArray, evenSize);

	cout << "\nEven values: ";
	for (int i = 0; i < evenSize; i++) {
		cout << evenArray[i] << " ";
	}

}

void getEvenIndexElements(int arr1[], int size, int evenIndexArray[], int& evenIndexSize) {
	evenIndexSize = 0;
	for (int i = 0; i < size; i++) {
		if (i % 2 == 0) {
			evenIndexArray[evenIndexSize++] = arr1[i];
		}
	}
}

void findEvenElements(int arr1[], int size, int evenArray[], int& evenSize) {
	evenSize = 0;
	for (int i = 0; i < size; i++) {
		if (arr1[i] % 2 == 0) {
			evenArray[evenSize++] = arr1[i];
		}
	}
}

 
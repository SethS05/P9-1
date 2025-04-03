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



int main()
{
	int arr1[10];

	srand(time(0));

	const int size = 10;

	cout << "The random integers: ";

	for (int i = 0; i < size; i++) {
		arr1[i] = 1000 + rand() % 9000;
		cout << arr1[i] << " ";
	}


}

 
// Bubble_sort_[C++].

#include <iostream>
using namespace std;

void inputData(int* &arr, int &size){
	cout<<"Enter ellements, you would like to sort: ";
	for(int i=0; i<size; i++) cin>>arr[i];
}

void outputData(int* &arr, int &size){
	cout<<"Sorted array: \n";
	for(int i=0; i<size; i++) cout<<arr[i]<<" ";
}

void bubbleSort1(int* &arr, int size){
	for (int i = 0; i < size; i++){
        for (int j=size-1; j > i; j--){
			if(arr[j] < arr[j-1]){
				int tmp = arr[j];
				arr[j] = arr[j-1];
				arr[j-1] = tmp;
			}
        }
    }
}

void bubbleSort2(int* &arr, int size){
	for (int i = 0; i < size; i++){
        for (int j = 0; j < size - i; j++){
			if(arr[j] < arr[j-1]){
				int tmp = arr[j];
				arr[j] = arr[j-1];
				arr[j-1] = tmp;
			}
        }
    }
}

int main()
{	//I create variable for array`s size.
	int size;
	
	//User enters size of array.
	cout<<"Enter the size of array: ";
	cin>> size;

	//I create dynamic array to sort its in future.
	int *arr= new int[size];

	//Call input function
	inputData(arr, size);

	//Call sort function
	bubbleSort1(arr, size); //Sorts from first to n ellement
	//bubbleSort2(arr, size);   //SOrts from n to first ellement

	//Call output function
	outputData(arr, size);

	system("pause");
	return 0;
}


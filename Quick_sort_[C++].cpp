// Quick_sort_[C++].cpp

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

void quickSort(int* &arr, int left, int right) {
	int i = left, j = right;
	int tmp;
	int pivot = arr[(left + right) / 2];

	while (i <= j) {
		while (arr[i] < pivot)
			i++;
		while (arr[j] > pivot)
			j--;
		if (i <= j) {
			tmp = arr[i];
			arr[i] = arr[j];
			arr[j] = tmp;
			i++;
			j--;
		}
    };
 
	if (left < j)
		quickSort(arr, left, j);
	if (i < right)
		quickSort(arr, i, right);
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
	quickSort(arr, 0, size-1);
	
	//Call output function
	outputData(arr, size);

	system("pause");
	return 0;
}

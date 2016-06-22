// Shaker_sort_[C++].cpp: определяет точку входа для консольного приложения.
//

#include <iostream>
using namespace std;

void inputData(int* &arr, int &size){
	cout<<"Enter ellements, you would like to sort: ";
	for(int i=0; i<size; i++) cin>>arr[i];
}

void outputData(int* &arr, int &size){
	cout<<"Sorted arr: \n";
	for(int i=0; i<size; i++) cout<<arr[i]<<" ";
}



//Shaker sort (from max to min)
void shakerSort(int* &arr, int size) {
    for (int i = 0; i < size/2; i++) {
        bool swapped = false;
        for (int j = i; j < size - i - 1; j++) { //one way
            if (arr[j] < arr[j+1]) {
                int tmp = arr[j];
                arr[j] = arr[j+1];
                arr[j+1] = tmp;
                swapped = true;
            }
        }
        for (int j = size - 2 - i; j > i; j--) { //and back
            if (arr[j] > arr[j-1]) {
                int tmp = arr[j];
                arr[j] = arr[j-1];
                arr[j-1] = tmp;
                swapped = true;
            }
        }
        if(!swapped) break; //block (break if no element was swapped - the arr is sorted)
    }
}


int main()
{	//I create variable for arr`s size.
	int size;
	
	//User enters size of arr.
	cout<<"Enter the size of arr: ";
	cin>> size;

	//I create dynamic arr to sort its in future.
	int *arr= new int[size];

	//Call input function
	inputData(arr, size);

	//Call sort function
	shakerSort(arr, size);
	
	//Call output function
	outputData(arr, size);

	system("pause");
	return 0;
}
#include <iostream>
#include <string>
#include <iomanip>

using namespace std;

template<typename T>
void Print(T arr, int size){
	for(int i=0; i<size; i++){
	cout << setw(10) << arr[i];	
	}
	cout << endl;	
	return;	
}

template<typename T>
void Sort(T arr[], int size){
	
	for(int j=0; j<size-1; j++){
		for(int i=0; i<size; i++){
			if(arr[i]>arr[j+1]){
				T temp;
				temp=arr[i];
				arr[i]=arr[j+1];
				arr[j+1]=temp;			
			}				
		}			
	}	
	return;
}


int main(){
	int arr1[] = {10, 61, 31, 50, 4};
	float arr2[] = {10.1, 61.2, 31.3, 50.4, 4.5};
	string arr3[] = {"Alan", "Zebra", "Kevin", "Bob", "Lucy"};
	
	cout << "Before sort: " << endl;
	Print(arr1, 5);
	Print(arr2, 5);
	Print(arr3, 5);
	
	Sort(arr1, 5);
	Sort(arr2, 5);
	Sort(arr3, 5);
	
	cout << "After sort: " << endl;
	Print(arr1, 5);
	Print(arr2, 5);
	Print(arr3, 5);
	return 0;
}

#include <iostream>

using namespace std;
	
int main(){
	int size;
	cout << "輸入陣列大小 ";
	cin >> size;
	int* arrPtr = new int[size];
	for(int i = 0; i < size; i++){
		cout << "輸入陣列第" << i+1 << "筆資料 ";
		cin >> *(arrPtr+i); 
	}
	for(int i = 0; i < size; i++){
		cout << *(arrPtr+i) << endl;
	}
	
	delete [] arrPtr;
	return 0;
}

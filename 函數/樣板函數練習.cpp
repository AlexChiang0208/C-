#include <iostream>
#include <string>

using namespace std;

template<typename T> // 樣板函數：建立一個通用於不同資料型態的函數
void Find(T arr[], int size, T target){
	int count = 0;
	for(int i = 0; i < size; i++){
		if(arr[i] == target){
			count++;
		}
	}
	if(count == 0){
		cout << "陣列裡沒有資料 " << target << endl;
	}
	else{
		cout << "陣列裡一共找到 " << count << " 個 " << target << endl;
	}
	
	return;
}


int main(){ 
	int arr_1[5] = {0,1,1,2,3};
	float arr_2[5] = {2.1, 0.5, 3.3, 6.5, 1.2};
	string arr_3[5] = {"Andy", "Kevin", "Jason", "Wendy", "Ken"}; 
	
	int myInt;
	float myFloat;
	string myString;
	
	cout << "輸入要尋找的整數";
	cin >> myInt;
	Find(arr_1, 5, myInt);
	cout << "輸入要尋找的浮點數";
	cin >> myFloat;
	Find(arr_2, 5, myFloat);
	cout << "輸入要尋找的字串";
	cin >> myString;
	Find(arr_3, 5, myString); 
	return 0;
}

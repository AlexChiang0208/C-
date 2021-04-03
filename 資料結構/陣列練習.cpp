#include <iostream>
using namespace std;

int main(){
	int expenditure[7];
	int i;
	for(i = 0; i < 7; i++) // Array start from 0
	{
		cout << "輸入支出";
		cin >> expenditure[i];
	}
	
	for(i = 0; i < 7; i++){
		cout << expenditure[i] << endl;
	}
	
	int total = 0;
	for(i = 0; i < 7; i++){
		total += expenditure[i];
	}
	cout << "總支出為: " << total << endl;
	return 0;
}

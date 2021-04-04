#include <iostream>

using namespace std;

// void: 沒有回傳的形態
void myFunction(){
	cout << "This is my first function!" << endl;
	return;
}

int main(){
	cout << "Call my function!" << endl;
	myFunction();
	return 0;
}

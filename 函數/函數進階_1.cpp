#include <iostream>

using namespace std;

// Call by Value
void convert_1(int num){
	num = num*2;
	return;
}

// Call by Reference (陣列型態都是預設這個)
void convert_2(int &num){
	num = num*2;
	return;
}

int main(){
    int number1, number2;
    cout << "Enter number1: ";
    cin >> number1;
    cout << "Enter number2: ";
    cin >> number2;
    convert_1(number1);
    convert_2(number2);
    cout << "Call by Value: " << number1 << endl;
    cout << "Call by Reference: " << number2 << endl;
	return 0;
}

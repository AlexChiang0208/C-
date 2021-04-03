#include <iostream>

using namespace std;

int main(){
    int MyInt = 100;
    double MyDouble = 3.14159;
    char MyChar = 'a';
    cout << MyInt << endl;
    cout << MyDouble << endl;
    cout << MyChar << endl;
    cout << sizeof(MyInt) << endl; // Data size of MyInt
    cout << sizeof(MyDouble) << endl;
    cout << sizeof(MyChar) << endl;
    int BigNum = 2147483647;
    cout << BigNum + 1; // Overflow
	return 0;
}

#include <iostream>

using namespace std;

int main(){
	char input;
	cout << "Alex is a handsome guy. (Y/N): ";
	cin >>input;
	while(input != 'Y') // �@���o�{�G�o��u��� ' ' ����� " " 
	{ 
		cout << "Do not BLACK WHITE say!" << endl << "Answer again. (Y/N): ";
		cin >>input;
	}
	return 0;
}

#include <iostream>

using namespace std;

int main(){
	char input;
	cout << "Alex is a handsome guy. (Y/N): ";
	cin >>input;
	while(input != 'Y') // 世紀發現：這邊只能用 ' ' 不能用 " " 
	{ 
		cout << "Do not BLACK WHITE say!" << endl << "Answer again. (Y/N): ";
		cin >>input;
	}
	return 0;
}

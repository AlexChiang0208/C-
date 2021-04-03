#include <iostream>

using namespace std;

int main(){
	int age;
	char educate;
	cout << "請輸入年齡: ";
	cin >> age;
	cout << "是否就學中(T/F)?";
	cin >> educate;
	
	if(age < 19){
		cout << "目前還不用當兵!" << endl; 
	} 
	else if(educate == 'T'){
		cout << "目前還不用當兵!" << endl;
	}
	else{
		cout << "該當兵了!" << endl; 
	}
	return 0;
}

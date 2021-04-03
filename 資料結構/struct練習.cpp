#include <iostream>
#include <string>
using namespace std;

int main(){
	struct student{
		string name;
		int grade;
	};
	student Data[5];
	
	for(int i = 0; i < 5; i++){
		cout << "學生" << i+1 << "姓名: ";
		cin >> Data[i].name;
		cout << "學生" << i+1 << "成績: "; 
		cin >> Data[i].grade;
	}
	
	cout << "不及格的同學" << endl;
	for(int i = 0; i < 5; i++){
		if(Data[i].grade < 60){
			cout << Data[i].name << endl;
		}
	}
	return 0;
}

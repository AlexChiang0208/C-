#include <iostream>

using namespace std;

int main(){
	int num_1, num_2, ans, choice;
	cout << "請輸入兩個整數";
	cin >> num_1 >> num_2; 
	cout << "1.加法, 2.減法, 3.乘法, 4.除法";
	cin >> choice;

	switch(choice){
	    case 1:
			ans = num_1+num_2;
			cout << ans << endl;
			break;
		case 2:
			ans = num_1-num_2;
			cout << ans << endl;
			break;
		case 3:
			ans = num_1*num_2;
			cout << ans << endl;
			break;
		case 4:
			ans = num_1/num_2;
			cout << ans << endl;
			break;
		default:
			cout << "輸入有誤"<< endl;
			break;
	}
}

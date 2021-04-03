#include <iostream>

using namespace std;

int main(){
	int i, j;
	cout << "到哪個數字提早結束迴圈: " << endl; 
	cin >> j;
	for(i=1; i<=10; i++){
		if(i == 4){
			continue;
		}
		if(i == j){
			break;
		}
		cout << i << endl;
	}
	return 0;
}

#include <iostream>

using namespace std;

int main(){
	int i, j;
	cout << "����ӼƦr���������j��: " << endl; 
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

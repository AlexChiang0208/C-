#include <iostream>

using namespace std;

int main(){
	int i, j, k;
	for(i = 1; i<=5; i++){
		for(j = 6-i; j < 5; j++){  //�L�X�ťճ��� 
			cout << " ";
		}
		for(k = 2*i-1; k <10; k++){ //�L�X�P�P���� 
			cout << "*";
		}
		cout << endl;
	}
	return 0;
}

#include <iostream>

using namespace std;

int main(){
	int i, j, k;
	for(i = 1; i<=5; i++){
		for(j = 6-i; j < 5; j++){  //印出空白部分 
			cout << " ";
		}
		for(k = 2*i-1; k <10; k++){ //印出星星部分 
			cout << "*";
		}
		cout << endl;
	}
	return 0;
}

#include <iostream>
using namespace std;

int main(){
	int sale[2][4];
	int i,j;
	
	for(i=0; i<2; i++){
		for(j=0; j<4; j++){
			cout << "�~�ȭ� " << i+1 << " �b��" << j+1 << "�u���P��~�Z "; 
			cin >> sale[i][j];
		}
	}
	int total;
	for(i=0; i<2; i++){
		cout << "�~�ȭ�" << i+1 << endl;
		for(j=0; j<4; j++){
			cout << "��" << j+1 << "�u�~�Z:" << sale[i][j] << "\t"; 
			total += sale[i][j];
		}
		cout << endl;
	}
	cout << "�`�P��~�Z: " << total << endl; 
	return 0;
}


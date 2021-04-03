#include <iostream>
using namespace std;

int main(){
	int sale[2][4];
	int i,j;
	
	for(i=0; i<2; i++){
		for(j=0; j<4; j++){
			cout << "業務員 " << i+1 << " 在第" << j+1 << "季的銷售業績 "; 
			cin >> sale[i][j];
		}
	}
	int total;
	for(i=0; i<2; i++){
		cout << "業務員" << i+1 << endl;
		for(j=0; j<4; j++){
			cout << "第" << j+1 << "季業績:" << sale[i][j] << "\t"; 
			total += sale[i][j];
		}
		cout << endl;
	}
	cout << "總銷售業績: " << total << endl; 
	return 0;
}


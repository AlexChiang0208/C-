#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main(){
	char choice;
	vector<int>myVec;
	while(1){
		cout << "是否要新增資料(Y/N)";
		cin >> choice;
		if(choice == 'Y'){
			int temp;
			cin >> temp;
			myVec.push_back(temp);
		}
		if(choice == 'N'){
			break;
		}
	}
	sort(myVec.begin(), myVec.end());
	cout << "myVec 排序後" << endl;
	for(int i = 0; i < myVec.size(); i++){
		cout << myVec[i] << " ";
	}
}

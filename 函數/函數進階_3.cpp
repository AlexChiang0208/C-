#include <iostream>
#include <string>
#include <vector>

using namespace std;

void order(string customerName);
void pay(int cost);

int main(){
    int number;
    string name;
    vector<string>customerName;
    cout << "Enter number of customers: " << endl;
    cin >> number;
    for(int i=0; i<number; i++){
    	cout << "Enter " << i+1 << " Customer Name: " << endl;
    	cin >> name;
    	customerName.push_back(name);
	}
	for(int i=0; i<number; i++){
		order(customerName.at(i));
	}
    return 0;
}

void order(string customerName){
	char choice;
	int cost = 0;
	do{
		cout << "hi! " << customerName << " �Q�Y�I����\n a.�D���إq($100)\n b.�����إq($200)\n c.�C���먭($500)\n d.�F��($80)\n e.�M�s($200)\n";
		cout << " f.���b" << endl;
		cin >> choice;
		switch(choice){
			case 'a':
				cost += 100;
				cout << "�{�I�{���n������"<< endl;
				break;
			case 'b':
				cost += 200;
				cout << "�{�I�{���n������"<< endl;
				break;
			case 'c':
				cost+=500;
				cout << "�{�I�{���n������"<< endl;
				break;
			case 'd':
				cost+=80;
				cout << "�{�I�{���n������"<< endl;
				break;
			case 'e':
				cost+=200;
				cout << "�ܰs���}����!" << endl;
				break;
			case 'f':
				cout << "�ڭn���b" << endl;
				break;
			default:
				cout << "��J���~" << endl;
				break; 
		}
	}
	while(choice != 'f');
	pay(cost);
	return;
}

void pay(int cost){
	cout << "���O���B�O: " << cost << " ��" << endl;
	return;
}

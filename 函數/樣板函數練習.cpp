#include <iostream>
#include <string>

using namespace std;

template<typename T> // �˪O��ơG�إߤ@�ӳq�Ω󤣦P��ƫ��A�����
void Find(T arr[], int size, T target){
	int count = 0;
	for(int i = 0; i < size; i++){
		if(arr[i] == target){
			count++;
		}
	}
	if(count == 0){
		cout << "�}�C�̨S����� " << target << endl;
	}
	else{
		cout << "�}�C�̤@�@��� " << count << " �� " << target << endl;
	}
	
	return;
}


int main(){ 
	int arr_1[5] = {0,1,1,2,3};
	float arr_2[5] = {2.1, 0.5, 3.3, 6.5, 1.2};
	string arr_3[5] = {"Andy", "Kevin", "Jason", "Wendy", "Ken"}; 
	
	int myInt;
	float myFloat;
	string myString;
	
	cout << "��J�n�M�䪺���";
	cin >> myInt;
	Find(arr_1, 5, myInt);
	cout << "��J�n�M�䪺�B�I��";
	cin >> myFloat;
	Find(arr_2, 5, myFloat);
	cout << "��J�n�M�䪺�r��";
	cin >> myString;
	Find(arr_3, 5, myString); 
	return 0;
}

#include <iostream>
#include <vector>
#include <string>

using namespace std;

int main(){
	int MyArray[3][2] = {10, 20,
	   					 30, 40,
	   					 50, 60};
	cout << MyArray[0][0] << " ";
	cout << MyArray[0][1] << endl;
	cout << MyArray[1][0] << " ";
	cout << MyArray[1][1] << endl;
	cout << MyArray[2][0] << " ";
	cout << MyArray[2][1] << endl << "next_practice" << endl;
	
	vector<int>myVector;
	myVector.push_back(10); // myVector{10}
	myVector.push_back(20); // myVector{10, 20}
	myVector.push_back(30); // myVector{10, 20, 30}
	cout << myVector[0] << endl;
	cout << myVector.at(1) << endl;
	myVector.pop_back(); // myVector{10, 20}
	cout << myVector.size() << endl;
	cout << myVector.capacity() << endl << "next_practice" << endl;
	myVector.clear(); // myVector{}
	
	// Structure
	struct studentData{
		string id;
		string name;
		int age;
	};
	studentData myStudent; // should name the Structure-studentData
	myStudent.id = "01";
	myStudent.name = "Andy";
	myStudent.age = 3;
	cout << "Structure: " << myStudent.age << endl; // get one of Structure Data
	
	int num = 100;
	int* pointer = &num; 
	/* &num is the address of num; *&num means point to the address, so *&num is num.
	   這邊的 pointer 叫做 指標變數，同等於 &num； 而 &num 稱作 num 的指標  
	   另外，宣告指標變數記得加 * 喔 */
	cout << *pointer << endl << "next_practice" << endl;
	
	// 動態配置記憶體空間
	int* ptr_1 = new int(100);
	cout << *ptr_1 << endl;
	delete ptr_1;
	
	int size;
	cout << "enter size of array ";
	cin >> size;
	int* ptr_2 = new int[size];
	cout << size;
	delete [] ptr_2;
	
	return 0;
}

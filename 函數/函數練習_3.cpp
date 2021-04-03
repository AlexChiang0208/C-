#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

void triangle(int side1, int side2, int side3){
	vector<int>side;
	side.push_back(side1);
	side.push_back(side2);
	side.push_back(side3);
	sort(side.begin(), side.end());
	int greatest = side[2];
	if(greatest < side[0]+side[1]){
		cout << "It can be a triangle.";
	}
	else{
		cout << "It can not be a triangle.";
	}
	return;
}

int main(){
	int side1, side2, side3;
	cout << "Enter three side of triangle: ";
	cin >> side1 >> side2 >> side3;
	triangle(side1, side2, side3);
	return 0;
}

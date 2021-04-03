#include <iostream>

using namespace std;

int main(){
    const float pi = 3.14159;
    int r, area;
    cout << "enter r: ";
    cin >> r;
    area = r*r*pi;
    cout << "circle area is: " << area;
	return 0;
}

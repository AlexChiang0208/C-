#include <iostream>

using namespace std;

void measure(float , float );
void printAdvice(int );

int main(){
	float height, weight, BMI;
	flag:
	cout << "��J�����魫";
	cin >> height >> weight;
	if(height<=0 || weight<=0){
		cout << "���n�x�F" << endl;
		goto flag; // code will go to "flag" !!!
	}
	else{
		height = height/100;
		BMI = weight/(height*height);
		cout << "BMI��: " << BMI;
	}
	return 0;
}

#include <iostream>
#include <cmath> 

using namespace std;

void measure(float h, float w);
void printAdvice(float BMI);

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
		measure(height, weight);
	}
	return 0;
}

void measure(float h, float w){
	h = h/100;
	float BMI = w/pow(h,2);
	cout << "BMI��: " << BMI << endl;
	printAdvice(BMI);
	return;
}

void printAdvice(float BMI){
	if(BMI < 18.5){
		cout << "Too thin!" << endl;
	}
	else if(BMI >= 18.5 && BMI < 24.5){
		cout << "Good!" << endl;
	}
	else{
		cout << "Too fat!" << endl;
	}
	return;
}

#include <iostream>

using namespace std;

void measure(float , float );
void printAdvice(int );

int main(){
	float height, weight, BMI;
	flag:
	cout << "輸入身高體重";
	cin >> height >> weight;
	if(height<=0 || weight<=0){
		cout << "不要鬧了" << endl;
		goto flag; // code will go to "flag" !!!
	}
	else{
		height = height/100;
		BMI = weight/(height*height);
		cout << "BMI值: " << BMI;
	}
	return 0;
}

#include<iostream>

using namespace std;

int fac(int num){
	int ans = 1;
	for(int i = 1; i <= num; i++){
		ans = ans*i;
	}
	return ans;
}

int Fac(int num){
	if(num == 1){
		return 1;
	}
	else{
		return num*Fac(num-1); // It will run Fac() until num == 1
	}
}

int main(){
	int num;
	cout << "¿é¤J¼Æ¦r";
	cin >> num;
	cout << num << "¶¥­¼¬°: " << Fac(num) << endl; 
	
	return 0;
}

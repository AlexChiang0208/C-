#include <iostream>
#include <stdlib.h>
#include <ctime>
using namespace std;

int main(){
	srand(time(NULL));
	int guess;
	int time = 0;
	int max_num = 100;
	int min_num = 0;
	int my_num = rand() % (max_num - min_num + 1) + min_num;
		
	while(1) // Booling True, untill break;
	{
		cout << "�q�@��" <<  min_num << " �� " <<  max_num << "�������� ";
		cin >> guess;
		time++;
		if(guess == my_num){
			cout << "����F! " <<  "�@�@�q�F " << time << "��";
			break;
		}
		else if(guess >= my_num && guess <= max_num){
			max_num = guess;
		}
		else if(guess <= my_num && guess >= min_num){
			min_num = guess;
		}
		else{
			cout << "�O�x�F!!!" << endl; 
		}	
	}
return 0;
}

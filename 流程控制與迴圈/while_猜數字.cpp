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
		cout << "猜一個" <<  min_num << " 到 " <<  max_num << "之間的數 ";
		cin >> guess;
		time++;
		if(guess == my_num){
			cout << "答對了! " <<  "一共猜了 " << time << "次";
			break;
		}
		else if(guess >= my_num && guess <= max_num){
			max_num = guess;
		}
		else if(guess <= my_num && guess >= min_num){
			min_num = guess;
		}
		else{
			cout << "別鬧了!!!" << endl; 
		}	
	}
return 0;
}

#include <iostream>
#include <string>

using namespace std;

	int main(){
    string greet = "Hello!";
    string name = "Alex!";
    string welcome = greet + name;
    cout << welcome << endl;
    
    string str_1 = "apple";
    string str_2 = "banana";
    
    bool my_bool = str_1 == str_2;
    cout << my_bool << endl;

    cout << str_1.length() << endl;
    cout << str_1.append(str_2) << endl;
    cout << str_2.replace(2, 5, "d_boy") << endl;
    cout << str_1.find("app",0) << endl;
    
    string fruit = "pineapple";
    string str_3 = fruit.substr(4,8);
	cout << fruit << endl;
	cout << str_3 << endl;
    
/*  string Last_First_name;
    cout << "Enter your last anme and first name: ";
    cin >> Last_First_name;
    cout << Last_First_name << endl; */
    
    string Last_First_name;
    cout << "Enter your last anme and first name: ";
    getline(cin, Last_First_name);
    cout << Last_First_name << endl;
		return 0;
	} 

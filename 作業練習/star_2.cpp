#include <iostream>

using namespace std;

int main(){
    int base, times, half;
    int C, T, i, j;

    cout << "Please input the layer: ";
    cin >> base;
    cout << "Please input the cycle: ";
    cin >> times;
    half = base / 2;
    
    if(base % 2 == 1 ){base--;} //For odd layer

    for (C = 0; C < base + 1; C++)  //Current layer
    {
        for (T = 0; T < times; T++)
        {
            if (C < half)  // V
            {
                for (i = 0; i < C; i++)  //Space part
                { 
                    cout << " ";
                }
                for (j = 2 * (half - C) + 1; j > 0; j--)  //Star part
                { 
                    cout << "*";
                }
                for (i = 0; i < C; i++)  //Space part
                { 
                    cout << " ";
                }
            }
            else  // A
            {
                for (i = C; i < base; i++)  //Space part
                {
                    cout << " ";
                }
                for (j = 2 * (C - half) + 1; j > 0; j--)  //Star part
                {
                    cout << "*";
                }
                for (i = C; i < base; i++)  //Space part
                {
                    cout << " ";
                }
            }
        }
        cout << endl; //Next layer
    }
    return 0;
}

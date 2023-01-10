#include <iostream>
#include <cstdlib>
#include "include/termcolor.hpp"

using namespace std;

int main() {
    
    int height = 0;
    int max = 0;
    int n = 1;
    int type = rand() % 10;
    
    cout << "podaj wysokoksc: ";
    cin >> height;
    
    max = 2 * height - 1; 
    
    for(int i = 1; i <= height; i++) {
        cout << " ";
        for(int a = 0; a < ((max-1) / 2); a++) {
            cout << termcolor::on_color<64,69,100> << " ";
        }
        for(int b = 0; b < n; b++) {
            type = rand() % 10;
            if(type == 5 || type == 4) {
                cout << termcolor::red << "#";
            } else if(type < 8) {
                cout << termcolor::green << "*";
            } else {
                cout << termcolor::cyan << "%";
            }
        }
        for(int c = 0; c < ((max-1) / 2); c++) {
            cout << " ";
        }
        cout << " ";
        max = max - 2;
        n = n + 2;
        cout << endl;
    }
    cout << termcolor::dark << endl;

    system("pause");
    return 0;
}
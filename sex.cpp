#include <iostream>
#include <cstdlib>

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
        for(int a = 0; a < ((max-1) / 2); a++) {
            cout << " ";
        }
        for(int b = 0; b < n; b++) {
            type = rand() % 10;
            if(type == 5 || type == 4) {
                cout << "#";
            } else if(type < 8) {
                cout << "*";
            } else {
                cout << "%";
            }
        }
        for(int c = 0; c < ((max-1) / 2); c++) {
            cout << " ";
        }
        max = max - 2;
        n = n + 2;
        cout << endl;
    }
cout << endl;

    system("pause");
    return 0;
}
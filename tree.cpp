#include <iostream>
using namespace std;

int main() {
    cout << "-- 正直角三角形 --" << endl;
    for(int i = 1; i <= 5; i++) {
        for(int j = 1; j <= i; j++) {
            cout << "*";
        }
        cout << endl;
    }
    cout << "\n-- 反直角三角形 --" << endl;
    for(int i = 5; i >= 1; i--) {
        for(int j = 1; j <= i; j++) {
            cout << "*";
        }
        cout << endl;
    }
    cout << "\n-- 聖誕樹 --" << endl;
    int height = 5;
    for(int i = 1; i <= height; i++) {
        // 印空格
        for(int j = 1; j <= height - i; j++) {
            cout << " ";
        }
        for(int j = 1; j <= (2 * i - 1); j++) {
            cout << "*";
        }
        cout << endl;
    }
    for(int i=0; i<2; i++) {
        for(int j=0; j<height-1; j++) cout << " ";
        cout << "*\n";
    }

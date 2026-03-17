#include <iostream>
using namespace std;

int main() {
    int weight;
    cin >> weight;
    
    // 1. 這裡要加上 bool 或 int 定義
    int condition = (weight > 50); 
    
    // 2. 當 weight > 50 時 condition 是 1，反之是 0
    cout << (weight - condition) << endl;

    return 0;
} 

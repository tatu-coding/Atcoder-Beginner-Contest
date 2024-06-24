#include <iostream>
#include <string>
using namespace std;

int main() {
    int num;
    cin >> num;

    int d[num];
    
    for (int i = 0; i < num; i++) {
        cin >> d[i];
    }

    int heal = 0;

    for (int i = 0; i < num; i++) {
        for (int j = i + 1; j < num; j++) {
            heal += d[i] * d[j];
        }
    }

    cout << heal << endl;
}
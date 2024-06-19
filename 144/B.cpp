#include <iostream>
#include <string>
using namespace std;

int main() {
    int num;
    cin >> num;

    bool found = false;

    for (int i = 0; i <= 9; i++) {
        for (int j = 0; j <= 9; j++) {
            if (i * j == num) {
                cout << "Yes" << endl;
                found = true;
                break;
            }
        }
        if (found == true) {
            break;
        }
    }

    if (found == false) {
        cout << "No" << endl;
    }
}
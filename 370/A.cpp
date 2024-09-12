#include <iostream>
using namespace std;

int main() {
    int l, r;
    cin >> l >> r;

    if (l == 1) {
        if (r == 1) {
            cout << "Invalid" << endl;
        } else {
            cout << "Yes" << endl;
        }
    } else if (l == 0) {
        if (r == 1) {
            cout << "No" << endl;
        } else {
            cout << "Invalid" << endl;
        }
    }
}
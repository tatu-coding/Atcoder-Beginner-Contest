#include <iostream>
#include <string>
using namespace std;

int main() {
    string str;
    cin >> str;

    int len = str.length();

    bool ok = false;

    if (str[len - 1] == 'n') {
        if (str[len - 2] == 'a') {
            if (str[len - 3] == 's') {
                ok = true;
                cout << "Yes" << endl;
                return 0;
            } else {
                ok = false;
            }
        } else {
            ok = false;
        }
    } else {
        ok = false;
    }

    if (ok == false) {
        cout << "No" << endl;
    }
}
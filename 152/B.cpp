#include <iostream>
#include <string>
using namespace std;

int main() {
    int a, b;
    cin >> a >> b;

    string str1(b, ' ');
    string str2(a, ' ');

    for (int i = 0; i < b; i++) {
        str1[i] = '0' + a; 
    }

    for (int i = 0; i < a; i++) {
        str2[i] = '0' + b;
    }

    if (str1 >= str2) {
        cout << str2 << endl;
    } else {
        cout << str1 << endl;
    }
}
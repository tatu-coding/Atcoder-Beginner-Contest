#include <iostream>
#include <string>
using namespace std;

int main() {
    string str;
    cin >> str;

    int length = str.length();

    while (str[length-1] == '0') {
        str.pop_back();
        length = str.length();
    }

    if (str[length-1] == '.') {
        str.pop_back();
    }

    cout << str << endl;
}
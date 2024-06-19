#include <iostream>
#include <string>
using namespace std;

int main() {
    int num;
    cin >> num;

    string str;
    cin >> str;

    for(int i = 0; i < static_cast<int>(str.length()); i++) {
        char ch = str[i];

        int ascii = static_cast<int>(ch);
        ascii += num;

        if (ascii > 90) {
            ascii -= 26;
        }

        ch = static_cast<char>(ascii);

        str[i] = ch;
    }

    cout << str << endl;
}
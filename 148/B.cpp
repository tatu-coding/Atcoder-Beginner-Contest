#include <iostream>
#include <string>
using namespace std;

int main() {
    int num;
    cin >> num;

    string str1;
    cin >> str1;

    string str2;
    cin >> str2;

    string str3(2 * num, ' ');

    for (int i = 0; i < 2 * num; i += 2) {
        str3[i] = str1[i / 2];
        str3[i + 1] = str2[i / 2];
    }

    cout << str3 << endl;
}

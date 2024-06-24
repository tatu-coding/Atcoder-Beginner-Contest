#include <iostream>
#include <string>
using namespace std;

int main() {
    int num;
    cin >> num;

    string str;
    cin >> str;

    int count = 0;

    size_t pos = str.find("ABC");

    while (pos != string::npos) {
        count++;

        pos = str.find("ABC", pos + 1);
    }

    cout << count << endl;
}
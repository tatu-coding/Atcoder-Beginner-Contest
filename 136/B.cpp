#include <iostream>
#include <string>
using namespace std;

int main() {
    int num;
    cin >> num;

    int count = 0;

    for (int i = 1; i <= num; i++) {
        string str;
        str = to_string(i);

        if (str.length() % 2 == 1) {
            count++;
        }
    }

    cout << count << endl;
}
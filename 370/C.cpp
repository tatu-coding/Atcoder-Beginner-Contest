#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
using namespace std;

int main() {
    string s;
    string t;

    cin >> s >> t;

    vector<string> vec;
    bool ok = true;

    while(ok) {
        for (int i = 0; i < s.length(); i++) {
            if (s[i] > t[i]) {
                s[i] = t[i];
                vec.push_back(s);
            } 

            if (i == s.length() - 1) {
                ok = false;
            }
        }
    }

    ok = true;

    while(ok) {

        if (s == t) {
            ok = false;
            break;
        }

        for (int i = s.length() - 1; i >= 0; i--) {
            if (s[i] < t[i]) {
                s[i] = t[i];
                vec.push_back(s);
            }
        }
    }

    cout << vec.size() << endl;

    for (int i = 0; i < vec.size(); i++) {
        cout << vec[i] << endl;
    }
}
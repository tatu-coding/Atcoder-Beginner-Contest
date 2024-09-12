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
        int count = 0;

        if (s == t) {
            ok = false;
            break;
        }

        for (int i = 0; i < s.length(); i++) {
            if (s[i] > t[i]) {
                s[i] = t[i];
                vec.push_back(s);
                count++;
            } 
        }

        if (count == 0) {
            vec.push_back(t);
            ok = false;
        }
    }

    cout << vec.size() << endl;

    for (int i = 0; i < vec.size(); i++) {
        cout << vec[i] << endl;
    }
}
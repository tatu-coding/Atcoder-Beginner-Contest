#include <iostream>
#include <string>
#include <algorithm>
#include <vector>
using namespace std;

int main() {
    string s;
    string t;
    cin >> s >> t;

    int s_len = s.length();
    int t_len = t.length();

    int m = max(s_len, t_len);

    for (int i = 0; i < m; i++) {
        if (s[i] == t[i]) {
            if (i == (m - 1)) {
                cout << "0" << endl;
                return 0;
            }
        }

        if (s[i] != t[i]) {
            cout << i + 1 << endl;
            return 0;
        }
    }
}
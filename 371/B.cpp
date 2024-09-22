#include <iostream>
#include <vector>
#include <string>
#include <algorithm>
using namespace std;

int main() {
    int n, m;
    cin >> n >> m;

    vector<int> a(100, 0);

    for (int i = 0; i < m; i++) {
        int num;
        cin >> num;

        string str;
        cin >> str;

        if (str == "M") {
            if (a[num - 1] == 0) {
                a[num - 1] = 1;
                cout << "Yes" << endl;
            } else if (a[num - 1] == 1) {
                cout << "No" << endl;
            }
        } else if (str == "F") {
            cout << "No" << endl;
        }
    }
}
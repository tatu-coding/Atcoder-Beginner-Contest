#include <iostream>
#include <vector>
using namespace std;

int main() {
    int n;
    cin >> n;

    vector<vector<int>> vec(n, vector<int>(n, 0));

    for (int i = 0; i < n; i++) {
        for (int j = 0; j <= i; j++) {
            cin >> vec[i][j];
        }
    }

    int a = vec[0][0];

    for (int i = 2; i <= n; i++) {
        if (a > i) {
            a = vec[a - 1][i - 1];
        } else {
            a = vec[i - 1][a - 1];
        }
    }

    cout << a << endl;
}

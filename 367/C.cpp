#include <iostream>
#include <vector>
#include <cmath>
using namespace std;

int main() {
    int n, k;
    cin >> n >> k;

    int r[n];

    for (int i = 0; i < n; i++) {
        cin >> r[i];
    }

    int num2 = pow(n, n);

    vector<vector<int>> vec(num2, vector<int>(n, 1));

    for (int i = 0; i < num2; i++) {
        vec[i][n - i - 1]++;
    }

    for (int i = 0; i < num2; i++) {
        for (int j = 0; j < n; j++) {
            cout << vec[i][j];
        }
        cout << " " << endl;
    }
}
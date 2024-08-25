#include <iostream>
using namespace std;

int main() {
    int n, k;
    cin >> n >> k;

    int a[n-k];
    int b[k];

    for (int i = 0; i < n - k; i++) {
        cin >> a[i];
    }

    for (int i = 0; i < k; i++) {
        cin >> b[i];
    }

    for (int i = 0; i < k; i++) {
        cout << b[i] << " ";
    }

    for (int i = 0; i < n - k; i++) {
        if (i == n - k - 1) {
            cout << a[i] << endl; 
        } else {
            cout << a[i] << " ";
        }
    }
}
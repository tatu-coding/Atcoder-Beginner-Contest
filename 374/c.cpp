#include <iostream>
#include <algorithm>
#include <numeric>
#include <vector>
using namespace std;

int main() {
    int n;
    cin >> n;

    vector<long long> k(n);

    for (int i = 0; i < n; i++) {
        cin >> k[i];
    }

    int sum = accumulate(k.begin(), k.end(), 0);
    int center = sum / 2;

    sort(k.begin(), k.end());

    int sum1 = k[0];
    k.erase(k.first());
    int sum2;

    if (n == 2) {
        if (k[0] > k[1]) {
            cout << k[0] << endl;
            return 0;
        } else {
            cout << k[1] << endl;
            return 0;
        }
    }

    bool ok = true;

    while (ok) {
        int i = 0;

        if (sum1 < center) {
            if (center > (sum1 + k[n - i -1])) {
                sum1 += k[n - i - 1];
                k.erase(k.end());
            } else {
                sum1 += k[0];
                k.erase(k.first());

                if (sum1 > center) {
                    cout << sum1 << endl;
                    return 0;
                } 
            }
        }

        i++;
        n--;
    }
}


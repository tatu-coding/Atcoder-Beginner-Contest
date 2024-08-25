#include <iostream>
#include <vector>
using namespace std;

int main() {
    int n;
    cin >> n;

    vector<int> h(n);
    for (int i = 0; i < n; i++) {
        cin >> h[i];
    }

    long long t = 0;

    for (int i = 0; i < n; i++) {
        int x = h[i]/5;
        t += x*3;
        h[i] -= x*5;

        while (h[i] > 0) {
            t++;
            if (t%3 == 0) {
                h[i] -= 3;
            } else {
                h[i]--;
            }
        }
    }

    cout << t << endl;
}
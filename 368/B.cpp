#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main() {
    int n;
    cin >> n;

    vector<int> a(n);
    for (int i = 0; i < n; i++) {
        cin >> a[i];
    }

    int count2 = 0;
    bool ok = true;

    while(ok) {
        count2++;

        sort(a.begin(), a.end(), greater<int>());

        a[0]--;
        a[1]--;

        int count1 = 0;

        for (int i = 0; i < n; i++) {
            if (a[i] > 0) {
                count1++;
            }
        }

        if (count1 <= 1) {
            ok = false;
        }
    }

    cout << count2 << endl;
}
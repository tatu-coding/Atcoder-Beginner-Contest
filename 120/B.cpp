#include <iostream>
using namespace std;

int main() {
    int a, b, k;
    cin >> a >> b >> k;

    int ans = 0;
    int count = 0;
    bool found = false;

    for(int i = 100; i > 0; i--) {
        if (a % i == 0 && b % i == 0) {
            ans = i;
            count++;

            if(count == k) {
                break;
                found = true;
            }
        }

        if (found == true) {
            break;
        }
    }

    cout << ans << endl;
}
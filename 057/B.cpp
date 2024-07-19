#include <iostream>
#include <string>
#include <vector>
#include <cmath>
using namespace std;

int main() {
    long long num;
    cin >> num;

    vector<int> max;

    for (int i = 1; i <= sqrt(num); i++) {
        if (num % i == 0) {
            int a = i;
            int b = num / a;

            int a_len = to_string(a).length();
            int b_len = to_string(b).length();

            if (a_len > b_len) {
                max.push_back(a_len);
            } else {
                max.push_back(b_len);
            }
        }
    }

    int max2 = max[0];

    for (int i = 1; i < max.size(); i++) {
        if (max[i] < max2) {
            max2 = max[i];
        }
    }

    cout << max2 << endl;
}
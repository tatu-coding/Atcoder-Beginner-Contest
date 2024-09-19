#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main() {
    int a, b;
    cin >> a >> b;

    int dif = b - a;


    vector<int> ans;
    ans.push_back(a - dif);

    int c = a + b;

    if ((c%2) == 0) {
        ans.push_back(c/2);
    }

    ans.push_back(b + dif);

    if (a == b) {
        cout << "1" << endl;
    } else {
        cout << ans.size() << endl;
    }
}
#include <iostream>
#include <string>
using namespace std;

int main() {
    int num;
    cin >> num;

    int max;
    cin >> max;

    int ave;
    cin >> ave;

    int sum = 0;

    for (int i = 0; i < num - 1; i++) {
        int point;
        cin >> point;

        sum += point;
    }

    int need = (ave * num) - sum;

    if (0 < need && need <= max) {
        cout << need << endl;
    } else if (need <= 0) {
        cout << "0" << endl;
    } else {
        cout << "-1" << endl;
    }
}
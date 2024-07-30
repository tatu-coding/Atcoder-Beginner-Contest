#include <iostream>
using namespace std;

int main() {
    int num;
    cin >> num;

    int count2 = 0;

    for (int i = 0; i <= num; i++) {

        int count1 = 0;
        
        for (int j = 1; j <= i; j++) {
            if (i % j == 0) {
                count1++;
            }
        }

        if (i % 2 == 1 && count1 == 8) {
            count2++;
        }
    }

    cout << count2 << endl;
}
#include <iostream>
using namespace std;

int main() {
    int num;
    cin >> num;
    int j = 0, k = 0;

    for (int i = 0; i < num; i++) {
        int a;
        cin >> a;

        if(a%2 == 0) {
            j++;

            if(a%3 == 0 || a%5 == 0) {
                k++;
            }
        } 
    }

    if (j == k) {
        cout << "APPROVED" << endl;
    } else {
        cout << "DENIED" << endl;
    }
}
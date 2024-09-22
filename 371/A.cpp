#include <iostream>
#include <vector>
#include <string>
#include <algorithm>
using namespace std;

int main() {
    int A = 0;
    int B = 0;
    int C = 0;

    string d;

    for (int i = 0; i <= 2; i++) {
        cin >> d;

        if (i == 0) {
            if (d == ">") {
                A++;
            } else {
                B++;
            }
        }

        if (i == 1) {
            if (d == ">") {
                A++;
            } else {
                C++;
            }
        }

        if (i == 2) {
            if (d == ">") {
                B++;
            } else {
                C++;
            }
        }
    }

    if (A == 1) {
        cout << "A" << endl;
    } else if (B == 1) {
        cout << "B" << endl;
    } else if (C == 1){
        cout << "C" << endl;
    }
}
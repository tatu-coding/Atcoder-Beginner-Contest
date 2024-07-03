#include <iostream>
using namespace std;

int main() {
    string str;
    cin >> str;

    int count[10] = {0};
    int j = 0;

    for(int i = 0; i < str.length(); i++) {
        if(str[i] == 'A' || str[i] == 'C' || str[i] == 'G' || str[i] == 'T') {
            count[j]++;
        } else {
            j++;
        }
    }

    int max = count[0];

    for(int i = 1; i < 10; i++) {
        if (count[i] > count[i-1]) {
            max = count[i];
        }   
    }

    cout << max << endl;
}
#include <iostream>
#include <vector>
#include <string>
using namespace std;

int main() {
    int n;
    cin >> n;

    string str;
    cin >> str;

    vector<int> num(n);

    for (int i = 0; i < n; i++) {
        string str_tem = str.erase(i, 1);
        num[i] = stoi(str_tem);
    }

    int count;

    for (int i = 0; i < n; i++) {
        for (int j = i + 1; j < n; j++) {
            if (num[i] == num[j]) {
                ;
            }
        }
    }


}
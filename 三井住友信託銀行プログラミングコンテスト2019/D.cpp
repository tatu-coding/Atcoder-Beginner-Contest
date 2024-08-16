#include <iostream>
#include <string>
using namespace std;

int main() {
    int n;
    cin >> n;
    string str;
    cin >> str;
    
    int ans = 0;

    for (int i = 0; i < 1000; i++) {

        int x = i;
        string str2;
        for (int j = 0; j < 3; j++) {
            str2 += '0' + x%10;
            x /= 10;
        }

        int y = 0;
        for (int k = 0; k < n; k++) {
            if (str[k] == str2[y]) {
                y++;
                if (y == 3) {
                    break;
                }
            }
        }

        if (y == 3) {
            ans++;
        }
    }

    cout << ans << endl;
}

    // for (int i = 0; i < n - 2; i++) {
    //     for (int j = i + 1; j < n - 1; j++) {
    //         for (int k = j + 1; k < n; k++) {
    //             string str2;
    //             str2.push_back(str[i]);
    //             str2.push_back(str[j]);
    //             str2.push_back(str[k]);
    //             sub_str.push_back(str2);
    //         }
    //     }
    // }

    // for (int i = 0; i < sub_str.size(); i++) {
    //     for (int j = i + 1; j < sub_str.size(); j++) {
    //         if (sub_str[i] == sub_str[j]) {
    //             sub_str.erase(sub_str.begin() + j);
    //             j--;
    //         }
    //     }
    // }

    // cout << sub_str.size() << endl;
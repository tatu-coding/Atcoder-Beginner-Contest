#include <iostream>
#include <vector>
using namespace std;

int main() {
    int N;
    vector<int> honests[15];
    vector<int> liars[15];

    cin >> N;

    for (int i = 0; i < N; i++) {
        int A;
        cin >> A;
        for (int j = 0; j < A; j++) {
            int x, y;
            cin >> x >> y;
            if (y == 0) {
                liars[i].push_back(x - 1);
            } else {
                honests[i].push_back(x - 1);
            }
        }
    }

    int ans = 0;

    for (int bit = 0; bit < (1<<N); bit++) {
        bool ok = true;
        int count = 0;

        // 人物 i が誠実者であるかどうかをチェック
        for (int i = 0; i < N; i++) {
            if (bit & (1<<i)) {
                count++;

                for (int j = 0; j < honests[i].size(); j++) {
                    int honest = honests[i][j];
                    if (!(bit & (1<<honest))) {
                        ok = false;                    
                    }
                }

                for (int j = 0; j < liars[i].size(); j++) {
                    int liar = liars[i][j];
                    if (bit & (1<<liar)) {
                        ok = false;
                    }
                }
            }
        }

        if (ok) {
            ans = max(ans, count);
        }
    }

    cout << ans << endl;
}
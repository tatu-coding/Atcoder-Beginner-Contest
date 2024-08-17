#include <iostream>
#include <vector>
#include <cmath>
using namespace std;

int main() {
    int n, m;
    cin >> n >> m;
    vector<int> S[10];
    int P[10];

    for (int i = 0; i < m; i++) {
        int k;
        cin >> k;
        for (int j = 0; j < k; j++) {
            int s;
            cin >> s;
            s--;
            S[i].push_back(s);
        }
    }

    for (int i = 0; i < m; i++) {
        cin >> P[i];
    }
    
    int ans = 0;

    for (int bit = 0; bit < (1<<n); bit++) {
        int ok = 0;
        for (int i = 0; i < m; i++) {
            int count = 0;
            //電球 i に接続されているスイッチのうち、何個がオンになっているかを count でカウントしています 
            for (int j = 0; j < S[i].size(); j++) {
                if (bit & (1<<S[i][j])) count++;
            }
            if (count % 2 == P[i]) ok++;
        }
        if (ok == m) ans++;
    }

    cout << ans << endl;
}
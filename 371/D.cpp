#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main() {
    int N, Q;
    cin >> N;

    vector<int> X(N);  // 村の座標
    vector<int> P(N);  // 村人の人数

    // 村の座標と人数を入力
    for (int i = 0; i < N; i++) {
        cin >> X[i];
    }
    for (int i = 0; i < N; i++) {
        cin >> P[i];
    }

    cin >> Q;

    // 座標と人数をペアにしてベクターに格納
    vector<pair<int, int>> villages(N);
    for (int i = 0; i < N; i++) {
        villages[i] = {X[i], P[i]};
    }

    // 人数の累積和を計算
    vector<long long> prefix_sum(N + 1, 0);
    for (int i = 0; i < N; i++) {
        prefix_sum[i + 1] = prefix_sum[i] + P[i];
    }

    // クエリを処理
    for (int i = 0; i < Q; i++) {
        int L, R;
        cin >> L >> R;

        // X >= L となる最初の村のインデックスを探す
        int left = lower_bound(X.begin(), X.end(), L) - X.begin();

        // X > R となる最初の村のインデックスを探す
        int right = upper_bound(X.begin(), X.end(), R) - X.begin();

        // 範囲 [L, R] の合計人数を計算
        long long sum = prefix_sum[right] - prefix_sum[left];

        cout << sum << endl;
    }

    return 0;
}

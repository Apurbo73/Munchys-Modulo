#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int T;
    cin >> T;
    while (T--) {
        int N;
        cin >> N;
        vector<int> A(N);
        for (int &x : A) cin >> x;

        sort(A.begin(), A.end());

        int ans = 0;
        for (int j = 0; j < N; ++j) {
            for (int k = j + 1; k < N; ++k) {
                int sum = A[j] + A[k];
              
                for (int l = N - 1; l >= 0; --l) {
                    if (l != j && l != k) {
                        ans = max(ans, A[l] % sum);
                        break; 
                    }
                }
            }
        }
        cout << ans << '\n';
    }
    return 0;
}
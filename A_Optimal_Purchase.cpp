#include <bits/stdc++.h>
using namespace std;

#define int long long

signed main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int multTestQ;
    cin >> multTestQ;

    while (multTestQ--) {
        int n;
        cin >> n;

        vector<int> c(n);

        int base = 0;
        int ones = 0;
        int mx = 0;

        for (int i = 0; i < n; i++) {
            cin >> c[i];

            mx = max(mx, c[i]);

            if (c[i] == 1) {
                ones++;
            } else {
                base += c[i];
            }
        }

        int ans = base + min(ones, mx / 2);

        if (ans < 3) ans = 0;

        cout << ans << '\n';
    }

    return 0;
}
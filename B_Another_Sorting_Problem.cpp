#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int T;
    cin >> T;

    while (T--) {
        int n;
        cin >> n;

        vector<long long> a(n);

        for (int i = 0; i < n; i++) {
            cin >> a[i];
        }

        long long D = 0;

        // maximum drop
        for (int i = 0; i + 1 < n; i++) {
            if (a[i] > a[i + 1]) {
                D = max(D, a[i] - a[i + 1]);
            }
        }

        bool ok = true;
        bool needOne = false;

        for (int i = 0; i + 1 < n; i++) {

            if (a[i] > a[i + 1]) {
                // must go 0 -> 1
                if (needOne) {
                    ok = false;
                    break;
                }
                needOne = true;
            }
            else {
                long long gap = a[i + 1] - a[i];

                // can reset only if gap >= D
                if (gap >= D) {
                    needOne = false;
                }
            }
        }

        cout << (ok ? "YES" : "NO") << '\n';
    }
}
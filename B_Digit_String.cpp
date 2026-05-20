#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define endl '\n'

void solve() {
  string s;
        cin >> s;

        int dp0 = 0; 
        int dp1 = 0; 

        for (char c : s) {
            if (c == '2') {
                dp0++;
            }
            else if (c == '1' || c == '3') {
                dp1 = max(dp1 + 1, dp0 + 1);
            }
        }

        int keep = max(dp0, dp1);

        cout << (int)s.size() - keep << '\n';
    
   
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t;

    while(t--) solve();

    return 0;
}
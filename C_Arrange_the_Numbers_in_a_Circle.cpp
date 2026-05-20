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
        
        int total = 0;
        
        for (int i = 0; i < n; i++) {
            cin >> c[i];
            total += c[i];
        }
        
        if (n == 1) {
            
            cout << total << '\n';
        } else {
          
            int maxVal = c[n-1];
            int others = total - maxVal;
            
            int ans = min(total, 2 * others + 1);
            
            if (ans < 3) ans = 0;
            
            cout << ans << '\n';
        }
    }
    
    return 0;
}
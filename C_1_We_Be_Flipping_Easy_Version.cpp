#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t;

    while (t--) {

        int n;
        cin >> n;

        vector<long long> a(n+1);

        for (int i = 1; i <= n; i++) {
            cin >> a[i];
        }

        vector<int> ans;

      

        for (int i = 1; i <= n; i++) {

            long long cur = a[i] ;

            if (cur > 0) {
if(i!=1 ) {
                    ans.push_back(i-1);}
                while(i <= n && a[i] > 0) {
                    i++;
                }
                ans.push_back(i-1);

               
            }
        }

        cout << ans.size() << "\n";

        for (int x : ans) {
            cout << x << " ";
        }

        cout << "\n";
    }
}
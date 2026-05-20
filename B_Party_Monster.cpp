#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define endl '\n'

void solve() {
    int n;
    cin >> n;

    vector<char> a(n);
    
    for(char &x : a) cin >> x;
    if(n % 2 !=0) {
        cout << "NO" << endl;
        return;
    }
    int count = 0;
    int  count1 = 0;
    for(int i = 0; i < n; i++) {
        if(a[i] == '('){
            count++;
        } else count1++;
    }
    if(count == count1) cout << "YES" << endl;
    else cout << "NO" << endl;



}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t;

    while(t--) solve();

    return 0;
}
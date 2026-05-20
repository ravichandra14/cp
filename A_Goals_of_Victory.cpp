#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define endl '\n'

void solve() {
    int n;
    cin >> n;

    // safety

    vector<int> a(n-1);
    for (int &x : a) cin >> x;

    long long sum = 0;
    for (int x : a) sum += x;

    cout << -sum << endl;
}



int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t;

    while(t--) solve();

    return 0;
}
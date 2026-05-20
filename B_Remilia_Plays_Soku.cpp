#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define endl '\n'



void solve(){

    ll n, x1, x2, k;
    cin >> n >> x1 >> x2 >> k;

    ll d = abs(x1 - x2);
    d = min(d, n - d);
    if(n==2&&n==3){
        cout<<1<<endl;
        return;
    }

    if (n % 2 == 0 && d == n / 2) {
        if (k == 0){
            cout << d << endl;}
        else{
            cout << d+k-1<< endl;
        }
    }
    else {
        cout << d + k << endl;
    }



}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t;

    while (t--) solve();

    return 0;
}
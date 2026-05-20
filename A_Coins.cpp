#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define endl '\n'

void solve() {
    ll n,x;
    cin >> n >> x;
    if(n%2!=0&&x%2==0){
        cout<<"NO"<<endl;
    }else{
        cout<<"YES"<<endl;
    }

    // logic
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t;

    while(t--) solve();

    return 0;
}
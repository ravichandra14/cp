#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define endl '\n'

void solve() {
    int n;
    cin >> n;

    vector<int> a(n);
    for(int &x : a) cin >> x;
int countodd=0;
for(int i=0;i<n;i++){
    if(a[i]%2!=0){
        countodd++;
    }
}
if(countodd%2==0){
    cout<<"YES"<<endl;
}else{
    cout<<"NO"<<endl;
}
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t;

    while(t--) solve();

    return 0;
}
#include <bits/stdc++.h>
using namespace std;


#define ll long long
#define endl '\n'

void solve() {
    int n;
    cin >> n;

    vector<int> a(n);
    for(int &x : a) cin >> x;
    int gcd1= 0;
    int min1=INT_MAX;

for(int i=0;i<n-1;i++){
    for(int j=i+1;j<n;j++){
   gcd1=__gcd(a[i],a[j]);
    min1=min(min1,gcd1);
}
}
if(min1>2){
    cout<<"NO"<<endl;
} else {
    cout<<"YES"<<endl;
}}
int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t;

    while(t--) solve();

    return 0;
}
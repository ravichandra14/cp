#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define endl '\n'

void solve() {
    int n;
    cin >> n;

    vector<int> a(n);
    for(int &x : a) cin >> x;
int count=0;
   for(int i=0;i<n-1;i++){
    if((a[i]%2)==(a[i+1]%2)){
        count++;
    }
   
   }
 cout<<count<<endl;


}
int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t;

    while(t--) solve();

    return 0;
}
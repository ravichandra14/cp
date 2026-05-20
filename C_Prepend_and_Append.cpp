#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define endl '\n'

void solve() {
    int n;
    cin >> n;

    string a;
    cin >> a;

int count=n;
for(int i=0;i<n/2;i++){
if(a[i]!=a[n-i-1]){

    count-=2;
}else{
    break;
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
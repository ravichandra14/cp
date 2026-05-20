#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define endl '\n'

void solve() {
    int n,x;
    cin >> n>>x;
    string s;
 cin >> s;
 vector<int>v(26,0);
 for(int i=0;i<=n;i++){
    v[s[i]-'a']++;
 }
 int oddcount=0;
 for(int i:v){
    if(i%2==1){
        oddcount++;
    }
 }
 if(oddcount>x+1){
    cout<<"NO"<<endl;
 }else{
    cout<<"YES"<<endl;
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
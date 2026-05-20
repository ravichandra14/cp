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
    int count1=0;

    for(int i=0;i<n;i++){
        if(a[i]==-0){
           count++;
        }else{
            count1=max(count1,count);
          count=0;
        }
    }
    if(count>0){
        count1=max(count1,count);
    }
    cout << count1 << endl;
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t;

    while(t--) solve();

    return 0;
}
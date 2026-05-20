#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define endl '\n'

void solve() {
    int n,k;
    cin >> n>>k;

    vector<int> a(n);
    for(int &x : a) cin >> x;
int r=n-1;

int l=0;
sort(a.begin(),a.end());
   while (r>=l){
    int mid=(l+r)/2;
    if(a[mid]<k){
        l=mid+1;
    }else if(a[mid]==k){
        cout<<"YES"<<endl;
        return;
    }else{
          r=mid-1;
    }
   }
   cout<<"NO"<<endl;
   
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t;

    while(t--) solve();

    return 0;
}
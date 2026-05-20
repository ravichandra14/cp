#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define endl '\n'

void solve() {
    int n;
    cin >> n;

    vector<int> a(n);
    for(int &x : a) cin >> x;

   for(int i=0;i<n-1;i++){
       if(a[i]>a[i+1]){
     cout<<0<<endl;

     return;
   }


   }

int min=INT_MAX;
for(int i=0; i<n-1;i++){
    int dif=a[i+1]-a[i];
    if(dif<min){
        min=dif;
    }
}
int count=min/2+1;


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
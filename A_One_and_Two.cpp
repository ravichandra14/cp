#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define endl '\n'

void solve() {
    int n;
    cin >> n;

    vector<int> a(n);
    for(int &x : a) cin >> x;
   int product=0;
   int product1=0;

for(int i=0;i<n-1;i++){
    for(int j=0;j<=i;j++){
  if(a[j]==2){
     product++;
  }
  
}
for(int k=i+1;k<n;k++){
    if(a[k]==2){
         product1++;
    }
    
    }

if(product==product1){
    cout<<i+1<<endl;
    return;
}
product=0;
product1=0;
}
cout<<-1<<endl;
}
int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t;

    while(t--) solve();

    return 0;
}
#include <bits/stdc++.h>
using namespace std;
#include <cmath>

#define ll long long
#define endl '\n'

void solve() {
    int n;
    cin >> n;

    vector<int> a(n);
    for(int &x : a) cin >> x;
    int min=abs(a[0]);
    for(int i=1;i<n;i++){
 if(min>abs(a[i])){
    min=abs(a[i]);

 }

    
}
 cout<<min<<endl;
  
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

 

   solve();

    return 0;
}
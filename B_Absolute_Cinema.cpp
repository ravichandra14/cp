#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define endl '\n'

void solve() {
    int n;
    cin >> n;

    vector<long long> a(n);
    for(long long &x : a) cin >> x;
     vector<long long> b(n);
    for(long long &x : b) cin >> x;


    long long max=0;
   
long long max1=INT_MIN;




    for ( int i = 0; i < n; i++)
    { if(a[i]>b[i]){
        max+=a[i];
         if(b[i]>max1){
        max1=b[i];
    }
        }
  else { 
    max+=b[i];

    if(a[i]>max1) {
        max1=a[i];
    }


}
    }
    
    
    cout<<max+max1<<endl;
    


}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t;

    while(t--) solve();

    return 0;
}
#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define endl '\n'

void solve() {
    int n, x;
    cin >> n >> x;
    if(n==1){
         cout<<1<<endl;
    cout<<1<<endl;
    return;
        
    }
 if(n%x!=0){
   
    cout<<1<<endl;
    cout<<n<<endl;
   
}else{
    cout<<2<<endl;
    cout<<(n-1)<<" "<<1<<endl;

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
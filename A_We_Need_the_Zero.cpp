#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define endl '\n'

void solve() {
    int n;
    cin >> n;

    vector<int> a(n);
    for(int &x : a) cin >> x;
    int ans=0;
for(int i=0;i<n;i++){
    if(i==0){
        ans=a[0];
    }else{ans=ans^a[i];}
   


}



if(n%2==0){
        if(ans==0){
           cout<<3<<endl;
              return;
    
}else{
    cout<<-1<<endl;
    return;
}
}
cout<<ans<<endl;
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t;

    while(t--) solve();

    return 0;
}
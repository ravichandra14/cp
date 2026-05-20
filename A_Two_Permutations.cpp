#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define endl '\n'

void solve() {
    int n,a,b;
    cin >> n>>a>>b;
    if(n==a&&a==b){
cout<<"Yes"<<endl;
return;
    }


    
    if(a+b>n-2){
        cout<<"No"<<endl;
    }else{
        cout<<"Yes"<<endl;
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
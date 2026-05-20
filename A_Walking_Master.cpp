#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define endl '\n'

void solve() {
    ll a,b,c,d;
    cin >> a >> b >> c >> d;
    int move1=0;

if(b>d){
    cout<<-1<<endl;
}else{
    move1=d-b;
    a=a+move1;
    if(a>=c){
        move1=move1+(a-c);
        cout<<move1<<endl;
    }else{
        cout<<-1<<endl;
    }
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
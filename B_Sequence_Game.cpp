#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define endl '\n'

void solve() {
    int n;
    cin >> n;

    vector<int> a(n);
    for(int &x : a) cin >> x;
        vector<int> a1;
        a1.push_back(a[0]);
    for(int i=1;i<n;i++){
        if (a[i-1]>a[i])
        {

        
            a1.push_back(a[i]);
             a1.push_back(a[i]);
        
        }else{
            a1.push_back(a[i]);
        }
        

}
cout<<a1.size()<<endl;
for(int x:a1){
cout<<x<<" ";
}
cout<<endl;



}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t;

    while(t--) solve();

    return 0;
}
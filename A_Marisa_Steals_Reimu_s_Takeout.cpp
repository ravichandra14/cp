#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define endl '\n'

void solve() {
    int n;
    cin >> n;

    vector<int> a(n);
    for(int &x : a) cin >> x;
    int count1=0;
    int count2=0;
    int count0=0;
    

    for(int i=0;i<n;i++){
       if(a[i]==1){
           count1++;
    }
    if(a[i]==2){
        count2++;
    }
    if(a[i]==0){
        count0++;
    }
} 

if(count1>=count2){
    cout<<count2+(count1-count2)/3+count0<<endl;
}else{
cout<<count1+(count2-count1)/3+count0<<endl;
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
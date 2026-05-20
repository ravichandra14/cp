#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define endl '\n'

void solve() {
   int a,b,x1,y1,x2,y2;
  
   cin>>a>>b;
   cin>>x1>>y1;
   cin>>x2>>y2;
   set<pair<int,int>>v1,v2;

   vector<pair<int,int>> v;
   v={{a,b},{b,a},{-a,b},{b,-a},{a,-b},{-b,a},{-a,-b},{-b,-a}};
    for(int i=0;i<8;i++){
     v1.insert({v[i].first+x1,v[i].second+y1});
    
    
     v2.insert({v[i].first+x2,v[i].second+y2});
    }
    int cnt=0;
     for (auto p : v1) {
        if (v2.count(p)) cnt++;
    }

    cout<<cnt<<endl;

}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t;

    while(t--) solve();

    return 0;
}
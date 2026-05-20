#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define endl '\n'

void solve() {
    int n;
    cin >> n;

    vector<int> a(n);
    for(int &x : a) cin >> x;

  vector<int> a2;
  vector<int> a3;
  vector<int> a6;
  vector<int> a1;
  for(int i:a){
    if(i%2==0&&i%6!=0){
        a2.push_back(i);
    }else if(i%3==0&&i%6!=0){
        a3.push_back(i);
    }else if(i%6==0){
        a6.push_back(i);
    }else{
 a1.push_back(i);
    }
  }
 
   for (int i:a2)
  {
   cout<<i<<" ";
  } for (int i:a1)
  {
   cout<<i<<" ";
  } for (int i:a3)
  {
   cout<<i<<" ";
  }
   for (int i:a6)
  {
   cout<<i<<" ";
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
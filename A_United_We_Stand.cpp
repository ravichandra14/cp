 #include <bits/stdc++.h>
 using namespace std;
 
 #define ll long long
 #define endl '\n'
 
 void solve() {
     int n;
     cin >> n;
 
     vector<int> a(n);
     for(int &x : a) cin >> x;
     sort(a.begin(), a.end());
 vector<int>b;
  vector<int>c;
  int i=n-1;
 int max=a[i];
while(max==a[i]&&i>=0){

c.push_back(a[i]);
i--;

}
if(i==-1){
    cout<<-1<<endl;
    return;
}
for(int j=0;j<=i;j++){
    b.push_back(a[j]);
}
   cout<<b.size()<<" "<<c.size()<<endl;
for(int i:b){
    cout<<i<<" ";
}
cout<<endl;
for(int i:c){
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
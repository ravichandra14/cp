#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define endl '\n'

void solve() {
    int n;
    cin >> n;

 int count=0;
 int temp=n;
 while(temp){
    
    count++;
temp=temp/10;
 }
 count--;
 if(!count){
    cout<<n<<endl;
 }else{
    cout<<9*count+int(n/pow(10,count))<<endl;
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
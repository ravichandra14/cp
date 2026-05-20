#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define endl '\n'

void solve() {
    int n;
    cin >> n;

     int x;
  unordered_map<int, int> freq;
    for(int i=0;i<n;i++) {
     
        cin>>x;
        freq[x]++;
    
    }
    if(freq.size()>2){
        cout<<"NO"<<endl;
        return;
    }
    if(freq.size()==1){
        cout<<"YES"<<endl;
        return;
    }else{if(n%2==0){
        if(freq[x]==n/2){
            cout<<"YES"<<endl;
        return;

        }else{
           cout<<"NO"<<endl;
        return; 
        }
    }else{
        if(freq[x]==n/2||freq[x]==(n/2+1)){
            cout<<"YES"<<endl;
        return;

        }else{
             cout<<"NO"<<endl;
        return;
        }

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
#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define endl '\n'

void solve() {
    int n,k,x;
    cin >> n >> k >> x;
if(x!=1){
    cout<<"YES"<<endl;
    cout<<n<<endl;
    for(int i=0;i<n;i++){
        cout<<1<<" ";

    }
    cout<<endl;
}else if(x==1&&k==2){
    int count=0;
    if(n%2==0){
        count=n/2;
         cout<<"YES"<<endl;
    cout<<count<<endl;
         for(int i=0;i<count;i++){
        cout<<2<<" ";

    }
    cout<<endl;
    }else{
  cout<<"NO"<<endl;
    }
    
   
}else if(x==1&&k!=1){
  
   if(n%2==0){
     int count=n/2;
         cout<<"YES"<<endl;
    cout<<count<<endl;
         for(int i=0;i<count;i++){
        cout<<2<<" ";

   }
    cout<<endl;
    
   
}else{
     int count=(n/2)-1;
         cout<<"YES"<<endl;
    cout<<count+1<<endl;
         for(int i=0;i<count;i++){
        cout<<2<<" ";


}
cout<<3<<endl;


}


}else if(x==1&&k==1){
    cout<<"NO"<<endl;
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
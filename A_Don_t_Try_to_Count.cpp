#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define endl '\n'

void solve() {
    int n,n2;
    cin >> n>>n2;
    string s;
    string s2;
cin>>s;
cin>>s2;

if(n<n2){
int i=0;
while (s.length() < n2+n)
{
 if(s.find(s2)!=-1){
    cout<<i<<endl;
     return;
 }else{
     s+=s;
    i++;
}

 }
 if(s.find(s2)!=-1){
    cout<<i<<endl;
     return;
 }
cout<<-1<<endl;

}





else if (n==n2){
    int i=0;
if(s.find(s2)!=-1){
    cout<<i<<endl;
     return;
 }else{
     s+=s;
    i++;
}
if(s.find(s2)!=-1){
    cout<<i<<endl;
     return;
}else{
    cout<<-1<<endl;
}
   


}else{

     int i=0;
if(s.find(s2)!=-1){
    cout<<i<<endl;
     return;
 }else{
     s+=s;
    i++;
}
if(s.find(s2)!=-1){
    cout<<i<<endl;
     return;
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
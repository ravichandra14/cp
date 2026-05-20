#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define endl '\n'

void solve() {
    int n;
    cin >> n;

    vector<int> a(n);
    for(int &x : a) cin >> x;
    int count=0;
    for(int i:a){
        if(i==-1){
            count++;
        }
    }
int move=0;
 if(count>=n-count){
move=(count-(n-count)+1)/2;}
count=count-move;
if(count%2==0){
    cout<<move<<endl;
}else{
    cout<<move+1<<endl;
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
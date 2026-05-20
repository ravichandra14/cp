#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define endl '\n'

void solve() { 
    int sum=0;
  
    for (int i = 0; i < 10; i++)
    {
       for (int j = 0; j < 10; j++)
       {char x;
        cin >> x;
  if(i==0 ||i==9||j==0 ||j==9){
  if(x=='X'){
    sum+=1;
  }
  }elseif(i==1 ||i==8||j==1 ||j==8){
  if(x=='X'){
    sum+=2;
  }
  }else if(i==2 ||i==7||j==2 ||j==7){
  if(x=='X'){
    sum+=3;
  }
  }else if(i==3 ||i==6||j==3 ||j==6){
  if(x=='X'){
    sum+=4;
  }
  }else if(i==4 ||i==5||j==4 ||j==5){
  if(x=='X'){
    sum+=5;
  }
       }
    
    }
    cout<<sum<<endl;
    


    

}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t;

    while(t--) solve();

    return 0;
}
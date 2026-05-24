#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define endl '\n'

void solve() {
    int n;
    cin >> n;

    vector<int> a(n);
    for(int &x : a) cin >> x;
    int min=INT_MAX;
    int max=INT_MIN;

  for (int i = 0; i < n; i++)
  {if (a[i] < min)
  {
    min = a[i];
  
  }
    if (a[i] > max)
    {
        max = a[i];
    }
    
    }
    cout << ceil((double)(max - min)/2) << endl;
  
  
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t;

    while(t--) solve();

    return 0;
}
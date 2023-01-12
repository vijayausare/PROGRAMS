 #include <iostream>
#include<cstring>
#include<vector>
#include<algorithm>
#include<map>
#include<math.h>
#include<climits>
#define ll long long
using namespace std;
ll bianry(ll n, ll x, ll mod) {
 ll ans = 1;
 while (x > 0) {
  if (x & 1) {
   ans = (ans * n ) % mod ;
  }
  x = x >> 1;
  n = (n * n ) % mod ;


 }
 return ans;
}
bool sortbysecdesc(const pair<string, int> &a,
                   const pair<string, int> &b)
{
 return a.second > b.second;
}


int main() {
 ios_base::sync_with_stdio(false);
 cin.tie(NULL);
#ifndef ONLINE_JUDGE
 freopen("in.txt", "r", stdin);
 freopen("ou.txt", "w", stdout);
#endif
 int t; cin >> t;
 while (t--) {
  int n; cin >> n;
  int a[n], b[n + 1];
  for (int i = 0; i < n; i++) {
   cin >> a[i];
   b[a[i]] = i + 1;
  }
  int f = 0;
  for (int i = 0; i < n; i++) {
   if (b[i + 1] == i + 1) {
    continue;
   }
   else {
    f = 1;
    break;
   }
  }
  if (f == 0) {
   cout << 0 << endl;
  }
  else if (b[1] == 1 or b[n] == n) {
   cout << 1 << endl;
  }
  else if (b[1] == n and b[n] == 1) {
   cout << 3 << endl;
  }
  else if (b[1] > 1 or b[n] < n) {
   cout << 2 << endl;
  }

 }
}
#include<bits/stdc++.h>
#define rep(i,start,lim) for(lld i=start;i<lim;i++)
#define repd(i,start,lim) for(lld i=start;i>=lim;i--)
#define scan(x) scanf("%lld",&x)
#define print(x) printf("%lld ",x)
#define f first
#define s second
#define pb push_back
#define mp make_pair
#define br printf("\n")
#define sz(a) lld((a).size())
#define YES printf("YES\n")
#define NO printf("NO\n")
#define all(c) (c).begin(),(c).end()
using namespace std;
#define INF         1011111111
#define LLINF       1000111000111000111LL
#define EPS         (double)1e-10
#define MOD         1000000007
#define PI          3.14159265358979323
using namespace std;
typedef long double ldb;
typedef long long lld;
lld powm(lld base,lld exp,lld mod=MOD) {lld ans=1;while(exp){if(exp&1) ans=(ans*base)%mod;exp>>=1,base=(base*base)%mod;}return ans;}
typedef vector<lld> vlld;
typedef pair<lld,lld> plld;
typedef map<lld,lld> mlld;
typedef set<lld> slld;
#define sync ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0)
#define endl '\n'
#define N 1000005
#define fre freopen("1.in","r",stdin); freopen("1.out","w",stdout);
int main()
{
  sync;
  lld n;
  string s;
  lld up =0 , low = 0,special = 0, digit= 0;
  cin>>n;
  cin>>s;
  rep(i,0,n) {
    if(s[i]>='A' and s[i]<='Z') up = 1;
    else if(s[i]>='a' and s[i]<='z') low = 1;
    else if(s[i]>='0' and s[i]<='9') digit = 1;
    else special = 1;
  }
  lld ans = (!up) + (!low) + (!digit) + (!special);
  if(ans + n < 6) {
    cout<<(ans + (6-n-ans));
  }
  else {
    cout<<ans;
  }
  return 0;
}
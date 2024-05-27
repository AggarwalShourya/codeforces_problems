#include <bits/stdc++.h>
#define ll long long
#define vi vector<int>
#define f(i, a, b) for (ll i = a; i < b; i++)
#define pii pair<ll,ll>
#define vpi vector<pair<ll,ll>>
#define vvi vector<vector<ll>>
#define in(v) f(i,0,v.size()) cin >> v[i]
#define all(x) x.begin(), x.end()
#define srt(v) sort(v.begin(), v.end())
#define pb push_back
#define ma map<long long, long long>
#define se set<long long>
#define lcm(a,b) (a*b)/__gcd(a,b)

const ll m1 = 1e9 + 7;
using namespace std;
// using namespace __gnu_pbds;
void solve()
{
ll n;
cin>>n;
vi vec(n);
in(vec);
ll sum = 0;
int negs = 0;
for(int i = 0; i < n; ++i) {
if(vec[i] < 0) {
++negs;
vec[i] = -vec[i];
}
sum += vec[i];
}
sort(vec.begin(), vec.end());
if(negs & 1) sum -= 2 * vec[0];
cout << sum <<endl;
}


int main()
{
  ios_base::sync_with_stdio(false);
  cout.tie(NULL);
  cin.tie(NULL);
  ll t = 1;
  cin>>t;
  while(t--)
  {
      solve();
  }
}
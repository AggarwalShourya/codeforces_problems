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
#define INF 1000000000

const ll m1 = 1e9 + 7;
using namespace std;
// using namespace __gnu_pbds;
string st;
bool isValid(int k)
{
	int ar[4] = {0};
	for(int i=0;i<k-1;i++)
	{
		int idx = st[i] - '0';
		ar[idx]++;
	}
	
	for(int i=k-1;i<st.size();i++)
	{
		int idx = st[i] - '0';
		ar[idx]++;
		
		if((ar[1] > 0) && (ar[2] > 0) && (ar[3] > 0))
		return true;
		
		idx = st[i-k+1] - '0';
		ar[idx]--;
	}
	
	return false;
}
 
int getAns()
{
	int res = INF;
	int L = 3;
	int R = st.size();
	
	while(L <= R)
	{
		int mid = (L + R) / 2;
		
		if(isValid(mid))
		res = min(res , mid) , R = mid-1;
		else
		L = mid + 1;
	}
	
	if(res == INF) 
    return 0;
	else
    
    return res;
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
    cin>>st;
	cout<<getAns()<<endl;
  }
}
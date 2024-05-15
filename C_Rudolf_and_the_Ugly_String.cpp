#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define vi vector<int>
#define f(i, a, b) for (ll i = a; i < b; i++)
    
void solve()
{
  ll n;
  cin>>n;
  string s;
  cin>>s;
    ll count = 0;
    f(i,0,n)
    {
        if(s[i]=='m' && s[i+1]=='a' && s[i+2]=='p' && i<n-2)
        {
            count++;
            i+=2;
        }
        else if(s[i]=='p' && s[i+1]=='i' && s[i+2]=='e' && i<n-2)
        {
            count++;
            i+=2;
        }
    }
    cout<<count<<endl;
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
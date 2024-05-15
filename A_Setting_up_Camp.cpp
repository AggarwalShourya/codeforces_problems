#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define vi vector<int>
#define f(i, a, b) for (ll i = a; i < b; i++)

void solve()
{
  {
    int a,b,c,ans;
    cin>>a>>b>>c;
    ans=a;
    ans += b/3;
    b%=3;
    if(b && c<3-b)
    {
        cout<<-1<<endl;
        return;
    }
    if(b)
    {
        ans++;
        c-=3-b;
    }
    ans+= c/3;
    if(c%3)
        ans++;
    cout<<ans<<endl;
}
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
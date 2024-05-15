#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define vi vector<int>
#define f(i, a, b) for (ll i = a; i < b; i++)

void solve()
{
    ll n;
    ll f;
    ll a;
    ll b;
    cin>>n>>f>>a>>b;
    vi vec(n+1);
    vec[0]=0;
    f(i,1,n+1){
        cin>>vec[i];
    }
    // if(vec[1]*a<b){
    //     f=f-(vec[1]*a);
    // }
    // else{
    //     f=f-b;
    // }
    f(i,1,n+1){
      f=f-min(a*(vec[i]-vec[i-1]),b);
    }
    if(f>0){
        cout<<"YES"<<endl;
    }
    else{
        cout<<"NO"<<endl;
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
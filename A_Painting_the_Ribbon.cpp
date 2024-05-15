#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define vi vector<int>
#define f(i, a, b) for (ll i = a; i < b; i++)

void solve()
{
  ll n;
  cin>>n;
  ll m;
  cin>>m;
  ll k;
  cin>>k;
  ll g;
  if(n%m!=0){
    g=n-(n/m+1);
    if(g>k){
      cout<<"YES"<<endl;
    }
    else{
      cout<<"NO"<<endl;
    }
  }
  if(n%m==0){
    g=n-n/m;
    if(g>k)
    {
      cout<<"YES"<<endl;
    }
    else{
      cout<<"NO"<<endl;
    }
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



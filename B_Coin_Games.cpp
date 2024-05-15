#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define vi vector<int>
#define f(i, a, b) for (ll i = a; i < b; i++)

void solve()
{
    ll n;
    cin>>n;
    string a;
    cin>>a;
    ll u=0;
    ll d=0;
    f(i,0,n){
      if(a[i]=='U'){
        u++;
      }
      else if(a[i]=='D'){
        d++;
      }

    }
    if(u%2==0){
      cout<<"NO"<<endl;
    }
    else{
      cout<<"YES"<<endl;
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
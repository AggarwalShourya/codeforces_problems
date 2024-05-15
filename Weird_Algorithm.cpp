#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define vi vector<int>
#define f(i, a, b) for (ll i = a; i < b; i++)

void solve()
{
  ll n;
  cin>>n;
 cout<<n<<" ";
  while(n!=1){
  if(n%2==0){
    n=n/2;
    cout<<n<<" ";
  }

  else{
    n=n*3+1;
    cout<<n<<" ";
  }
    
  }
}

int main()
{
  ios_base::sync_with_stdio(false);
  cout.tie(NULL);
  cin.tie(NULL);
  // ll t = 1;
  // cin>>t;
  // while(t--)
  {
      solve();
  }
}
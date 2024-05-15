#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define vi vector<int>
#define f(i, a, b) for (ll i = a; i < b; i++)

void solve()
{
  ll n;
  cin>>n;
  ll a;
  cin>>a;
  ll b;
  cin>>b;
   ll nums=0;
  if(2*a>b){
    while ((n != 1 && n != 0) && n >= 0) {
    n -= 2;
    nums += b;
}

    if(n==1){
        nums+=a;
    }
    if(n==0){
        nums+=0;
    }
  }
  if(2*a<b){
    nums=n*a;
  }
    cout<<nums<<endl;



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
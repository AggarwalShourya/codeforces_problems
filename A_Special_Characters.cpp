#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define vi vector<int>
#define f(i, a, b) for (ll i = a; i < b; i++)

void solve()
{
    ll n;
    cin>>n;
   if(n%2==1){
    cout<<"NO"<<endl;
   }
   else{
    cout<<"YES"<<endl;
   }
   for (int i=0; i<n/2; i++)
      for (int j=0; j<2; j++)
        cout <<"AB"[i&1];
    cout<<'\n';
  

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
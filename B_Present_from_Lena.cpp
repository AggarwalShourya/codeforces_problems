#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define vi vector<int>
#define f(i, a, b) for (ll i = a; i < b; i++)

void solve()
{
  ll n;
  cin>>n;
  ll N = n;
  int k=n+1;
  ll m=0;

 while(m<=n){
    f(i,0,m-1){
      //cout<<" ";
      cout<<i<<" ";
    }
    for(int j=m-1;j>=0;j--){
      cout<<j<<" ";
    }
    cout<<endl;
    f(i,0,N-m) cout<<"  ";
    m++;
  }

  while(k--){
  f(i,0,k){
    cout<<i<<" ";
  }
  for(int j=k;j>=0;j--){
        cout<<j<<" ";
    }
      
        cout<<endl;
        f(i,0,N-k+1) cout<<"  ";
     
  }
 
}
int main()
{
  ios_base::sync_with_stdio(false);
  cout.tie(NULL);
  cin.tie(NULL);
  {
      solve();
  }
}
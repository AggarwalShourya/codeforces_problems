#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define vi vector<int>
#define f(i, a, b) for (ll i = a; i < b; i++)

void solve()
{
  ll n;
  ll c;
  ll d;
  cin>>n;
  cin>>c;
  cin>>d;
  vi vec(n*n);
  f(i,0,n*n){
    cin>>vec[i];
  }
  ll nums=0;
  ll count=0;
  sort(vec.begin(),vec.end());
  f(i,0,n*n){
    f(j,i+1,n*n){
        if(vec[i]+c==vec[j]){
            nums++;
        }
        if(vec[i]+d==vec[j]){
            count++;
        }
    }
  }
  if(nums and count==(n*(n-1))){
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
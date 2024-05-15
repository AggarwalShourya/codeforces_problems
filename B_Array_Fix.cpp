#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define vi vector<int>
#define f(i, a, b) for (ll i = a; i < b; i++)
const ll m1 = 1e12 + 7;

void solve()
{
  ll n;
  cin>>n;
  vi vec(n);
  f(i,0,n){
    cin>>vec[i];
  }
    ll ctr=0;
  for(int i=vec.size()-2;i>=0;i--){
     if(vec[i]>vec[i+1]){
      ll norm=vec[i+1];
    ll nums=vec[i];
    while(nums>0){
        //n++;
        // if(vec[i]/10>vec[i]%10){
        //     ctr++;
        // }
        if(nums%10>norm){
          cout<<"NO"<<endl;
          return;
        }
        else{
        norm=nums%10;
        nums/=10;
        }
    
    }
    vec[i]=norm;
    }
  }

     cout<<"YES"<<endl;

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
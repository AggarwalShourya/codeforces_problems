#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define vi vector<int>
#define f(i, a, b) for (ll i = a; i < b; i++)

void solve()
{
  ll n;
  cin>>n;
  vi vec(n);
  f(i,0,n){
    cin>>vec[i];
  }
  ll left=0;
  ll right=0;
  //ll mid=0;
  f(i,0,n){
    if(vec[i]==vec[0]){ 
        left++;
    }
    else{
        break;
    }
  }
  //cout<<left<<endl;
  for(int j=n-1;j>=0;j--){
    if(vec[j]==vec[n-1]){
        right++;
    }
    else{
        break;
    }
  }
//   cout<<right<<endl;
  if(left==n){
    cout<<0<<endl;
    return ;
  }
  if(vec[0]==vec[n-1]){
    cout<<n-left-right<<endl;
  }
  else{
    cout<<(n-max(left,right))<<endl;
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
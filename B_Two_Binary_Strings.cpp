#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define vi vector<int>
#define f(i, a, b) for (ll i = a; i < b; i++)

void solve()
{
  string a;
  string b;
  cin>>a;
  cin>>b;
  ll count=0;
  if(a[1]=='1'&&b[1]=='1'){
    cout<<"YES"<<endl;
  }
  else{
    f(i,1,a.length()){
    if(a[i]=='0'&&b[i]=='0'){
        count=i;

    }
  }
  if(a[count+1]=='1'&&b[count+1]=='1'){
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
#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define vi vector<int>
#define f(i, a, b) for (ll i = a; i < b; i++)

void solve()
{
  ll n;
  ll k;
  cin>>n;
  cin>>k;
 string s;
 cin>>s;
 ll count=0;
 sort(s.begin(),s.end());
f(i,0,s.length()){
  if(s[i]==s[i+1]){
    count++;
  }
}
 cout<<count<<endl;
cout<<n-count;


}

int main()
{
  ios_base::sync_with_stdio(false);
  cout.tie(NULL);
  cin.tie(NULL);
  // ll t = 1;
  // cin>>t;
  cin.ignore();
  // while(t--)
  {
      solve();
  }
}
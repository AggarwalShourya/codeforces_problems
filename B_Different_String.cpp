#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define vi vector<int>
#define f(i, a, b) for (ll i = a; i < b; i++)
const ll m1 = 1e12 + 7;

void solve()
{
string s;
cin>>s;
ll nums=0;
f(i,0,s.length()){
    f(j,i+1,s.length()){
        if(s[i]!=s[j]){
            swap(s[i],s[j]);
        }
    }
}
f(i,0,s.length()-1){
    if(s[i]==s[i+1]){
        nums++;
    }
}
if(nums==s.length()-1){
    cout<<"NO"<<endl;
}
else{
    cout<<"YES"<<endl;
    cout<<s<<endl;
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
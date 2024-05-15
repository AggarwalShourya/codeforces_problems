#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define vi vector<int>
#define f(i, a, b) for (ll i = a; i < b; i++)

void solve()
{
  ll a;
  ll b;
  cin>>a;
  cin>>b;
  ll nums=0;
  if(a==1){
    cout<<pow(b,2)<<endl;
    
  }
 f(i,1,a){
    if(a%i==0 and b%i==0){
        nums++;
    }
 }
 if(nums==1){
    cout<<b*a<<endl;
 }
 else{
    if(b%a==0&&b%2==0&&a!=1){
        cout<<b*2<<endl;
    }
    if(b%a==0&&b%2!=0){
        cout<<b*a<<endl;
    }
   /// adding more 

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
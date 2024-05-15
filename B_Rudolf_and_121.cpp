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
  bool zero=true;
  f(i,1,n-1){
    {
      while(vec[i-1]>0)
      {vec[i-1]=vec[i-1]-1;}
      
       while(vec[i]>0){
        vec[i]=vec[i]-2;
        }

        while(vec[i+1]>0){
          vec[i+1]=vec[i+1]-1;
          }
        
        }
  
  } 

  f(i,0,n){
    if(vec[i]!=0){
        zero=false;
        break;
    }
    if(vec[i]<0){
      zero=false;
      break;
    }
  }
 if(zero){
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
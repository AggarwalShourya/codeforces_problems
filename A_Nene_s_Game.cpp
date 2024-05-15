#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define vi vector<int>
#define f(i, a, b) for (ll i = a; i < b; i++)

void solve()
{
  ll k;
  ll q;
  cin>>k;
  cin>>q;
  ll nums=0;
  vi vec1(k);
  vi vec2(q);
  f(i,0,k){
    cin>>vec1[i];
  }
  f(i,0,q){
    cin>>vec2[i];
  }
  f(j,0,q){
    
    f(i,0,k){
        while(vec2[j]>=vec1[i]){
        if(vec2[j]>=vec1[i]){
            nums++;
        }
         vec2[j]=vec2[j]-nums;
    }
  }
  }
cout<<nums<<endl;

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
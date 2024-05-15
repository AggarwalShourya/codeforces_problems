#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define vi vector<int>
#define f(i, a, b) for (ll i = a; i < b; i++)

void recursion(){
string s;
cin>>s;
f(i,0,(s.length()/2)){
if(s[2*i]>s[2*(i+1)]){
    swap(s[2*i],s[2*(i+1)]);
}
}

for(int i=s.length()/2;i>0;i--){
    if (s[2*i]<s[0]){
        swap(s[2*i],s[0]);
    }
}
recursion();
}

void solve()
{
recursion();
}
int main()
{
 
  {
      solve();
  }
}
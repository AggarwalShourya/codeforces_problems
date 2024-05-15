#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define vi vector<int>
#define f(i, a, b) for (ll i = a; i < b; i++)

void solve()
{
    string s;
    cin>>s;
    ll a = 0, b = 0;
    
    f(i,0,s.length())
    {
        if(s[i]=='0')    
         b++;
        if(s[i]=='1')  
         a++;
    }
    
    f(i,0,s.length())
    {
        if(s[i]=='1')
        {
            if(b==0)  
            break;
            else  
              b--;
           
        }
        
        else if(s[i]=='0')
        {
            if(a==0)    break;
            else    a--;
            
        }
    }
   
 
    cout<<max(a,b)<<endl;

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
#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define vi vector<int>
#define f(i, a, b) for (ll i = a; i < b; i++)

void solve()
{
    ll n;
    cin>>n;
    ll k;
    cin>>k;
    vi vec(n);
    f(i,0,n){
        cin>>vec[i];
    }
    ll count=0;
    ll nums=0;
    ll noob=0;
    ll normie=0;
    if(k==2){
        f(i,0,n){
        if(vec[i]%2==0){
            count++;
        }
    }
    }
    if(k==3){
        f(i,0,n){
            if(vec[i]%3==0){
                nums++;
            }
        }
    }
    if(k==5){
        f(i,0,n){
            if(vec[i]%5==0){
                noob++;
            }
        }
    }
    if(k==4){
        f(i,0,n){
            if(vec[i]%4==0){
                normie++;
            }
            if(vec[i]%2==0){
                count++;
            }
        }
    }
    ll arr[n];
    f(i,0,n){
        arr[i]=0;
    }
    if(count>0){
        cout<<0<<endl;
    }
    else{
        cout<<1<<endl;
    }
    // ll cj=0;
    // ll dj=0;
    if(nums>0){
        cout<<0<<endl;
    }
    else {
        f(i,0,n){
            arr[i]=vec[i]%3;
        }
        sort(arr,arr+n);
        cout<<3-arr[n-1]<<endl;


        // f(i,0,n){
        //     if((vec[i]+1)%3==0){
        //         cj++;
        //         // break;
        //     }
        //     else{
        //         break;
        //         }
        // }
        // f(i,0,n){
        //     if((vec[i]+2)%3==0){
        //         dj+=2;
        //     }
        //     else{
        //         break;
        //     }
        // }
        // if(cj!=0){
        //     cout<<cj<<endl;
        // }
        // else{
        //     cout<<dj<<endl;
        // }
    }
    if(normie>0||count>=2){
        cout<<0<<endl;
    }
    if(count==1){
        cout<<1<<endl;
    }
    else if(count<1&&normie<=0){
        cout<<2<<endl;
    }
    if(noob>0){
        cout<<0<<endl;
    }
    else{
        f(i,0,n){
            vec[i]=vec[i]%5;
        }
        sort(vec.begin(),vec.end());
        cout<<5-vec[n-1]<<endl;
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
#include <iostream>
#include <vector>
using namespace std;
#define ll long long int
int main() {
   ll n;
   cin>>n;
   vector<vector<ll>> arr(n);
   for(ll i=0; i<n; i++) {
      ll a, b;
      cin>>a>>b;
      arr[i].push_back(a);
      arr[i].push_back(b);
   }
   for(ll i=0; i<n; i++) {
      ll y = arr[i][0];
      ll x = arr[i][1];
      ll m = max(x, y);
      ll sq = m*m;
      ll sq1 = (m-1)*(m-1);
      ll ans;      
         if(m%2!=0){
            if(x == m)
            ans = sq - y + 1;
         else
            ans = sq1 + x;
         } else {
            if(y == m)
            ans = sq - x + 1;
         else
            ans = sq1 + y;
         }
      
      cout<<ans<<"\n";

   }      
}
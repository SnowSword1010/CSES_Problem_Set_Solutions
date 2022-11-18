#include<bits/stdc++.h>
#define ll long long int
using namespace std;

signed main(){
   ios_base::sync_with_stdio(false);
   cin.tie(NULL);
   cout.tie(NULL);
   ll n;
   cin >> n;
   ll sum = (n*(n+1))/2;
   ll temp;
   for(ll i = 0; i < n-1; i++){
       cin >> temp;
       sum -= temp;
   }
   cout << sum << endl;
}
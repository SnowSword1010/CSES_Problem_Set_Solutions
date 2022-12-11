#include<bits/stdc++.h>
using namespace std;

signed main(){
   ios_base::sync_with_stdio(false);
   cin.tie(NULL);
   cout.tie(NULL);
   string s;
   cin >> s;
   char prev = '\0';
   int cnt = 0;
   int maxCnt = 0;
   for(int i = 0; i < s.size(); i++){
       if(s[i] == prev){
           cnt++;
       }
       else{
           maxCnt = max(cnt, maxCnt);
           prev = s[i];
           cnt = 1;
       }
   }
   maxCnt = max(cnt, maxCnt);
   cout << maxCnt << endl;
}

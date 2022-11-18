#include<bits/stdc++.h>
#define ll long long int
#define endl "\n"
using namespace std;

signed main(){
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);
	ll n;
	cin >> n;
	while(n != 1){
		cout << n << " ";
		if(n&1){
			// n is odd
			n *= 3;
			n+=1;
		}
		else{
			// n is even
			n/=2;
		}
	}
	cout << n << endl;
}

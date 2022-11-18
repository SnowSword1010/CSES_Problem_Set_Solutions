#include<bits/stdc++.h>
#define int long long int
#define endl "\n"
using namespace std;

signed main(){
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);
	int n, q;
	cin >> n >> q;
	// prefix array
	int P[n] = {0};
	int temp;
	for(int i = 0; i < n; i++){
		cin >> temp;
		P[i] = temp;
		if(i != 0){
			P[i] += P[i-1];
		}
	}
	int a, b;
	for(int i = 0; i < q; i++){
		cin >> a >> b;
		a--;
		b--;
		int ans = P[b];
		if(a != 0){
			ans -= P[a-1];
		}
		cout << ans << endl;
	}
}

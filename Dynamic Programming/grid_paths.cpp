#include<bits/stdc++.h>
#define endl "\n"
#define ll long long int
#define P 1000000007
using namespace std;

bool isSafe(vector<vector<char>> &grid, ll x, ll y, ll n){
	if(x >= 0 && x < n && y >= 0 && y < n && grid[x][y] != '*')
		return true;
	return false;
}

ll countPaths(vector<vector<char>> &grid, ll n){
	vector<vector<ll>> dp(n, vector<ll> (n, 0)); // dp[i][j] = number of paths from (i,j) to (n-1, n-1)
	if(grid[n-1][n-1] == '*' || grid[0][0] == '*')
		return 0;
	dp[n-1][n-1] = 1;
	for(ll i = n-1; i > -1; i--){
		for(ll j = n-1; j > -1; j--){
			if(i == n-1 && j == n-1){
				dp[i][j] = 1;
				continue;
			}
			if(isSafe(grid, i, j+1, n)){
				dp[i][j] = (dp[i][j]%P + dp[i][j+1]%P)%P;
			}
			if(isSafe(grid, i+1, j, n)){
				dp[i][j] = (dp[i][j]%P + dp[i+1][j]%P)%P;
			}
		}
	}
	return dp[0][0];
}

/*ll countPaths(vector<vector<char>> &grid, ll x, ll y, ll n){
  if(x == n-1 && y == n-1 && grid[x][y] == '.'){
  return 1;
  }
  if(grid[x][y] == '*')
  return 0;
  ll ans = 0;
  if(isSafe(grid, x+1, y, n)){
  ans += countPaths(grid, x+1, y, n);
  }
  if(isSafe(grid, x, y+1, n)){
  ans += countPaths(grid, x, y+1, n);
  }
  return ans;
  }*/

signed main(){
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);
	ll n;
	cin >> n;
	vector<vector<char>> grid(n, vector<char> (n));
	for(ll i = 0; i < n; i++){
		for(ll j = 0; j < n; j++){
			cin >> grid[i][j];
		}
	}
	cout << countPaths(grid, n) << endl;
}

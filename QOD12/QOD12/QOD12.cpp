#include <iostream>
#include <vector>

/*
Michael Henein
Kirolous Farid
*/

using namespace std;

int solve(int m, int n) {
	vector<int> c(n, 1);
	vector<vector<int>> dp(m, c);   //a vector to store all possible combinations for each value of grids from 1 * 1 upto m * n
	for (int i = 1; i < m; i++) {  
		for (int j = 1; j < n; j++) {
			dp[i][j] = dp[i - 1][j] + dp[i][j - 1]; //each element is the sum of the previous row element of the same cloumn dp[i - 1][j] and the previous column element of the same row dp[i][j - 1]
		}
	}
	return dp[m - 1][n - 1];
}

int main() {
	cout << solve(3, 7);
	return 0;
}
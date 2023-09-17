#include <iostream>
#include <vector>
/* Michael Henein */
using namespace std;
//input: two strings    
//n is the size of one string and m is the size of the other
//Time complexity is O(n*m)
int longest_common_subsequence(string x, string y) {
	vector<int> a(y.size() + 1);
	vector<vector<int>> n(x.size() + 1, a);
	
	for (int i = 0; i <= x.size(); i++) {                              
		for (int j = 0; j <= y.size(); j++) {
			if (i == 0 || j == 0) {           
				n[i][j] = 0;
			}
			else if (x[i - 1] == y[j - 1]) {    //if element is equal in both strings increment size of subsequence of the prior i and j.
				n[i][j] = n[i-1][j-1] + 1;
			}
			else {
				n[i][j] = max(n[i - 1][j], n[i][j - 1]);  //if not the same element take the maximum between the previous column, same row and the previous row, same column 
			}
		}
	}
	return n[x.size()][y.size()];
}

int main() {
	string x = "fishing", y = "visage";
	cout << longest_common_subsequence(x, y);
	return 0;
}
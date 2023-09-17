#include <iostream>
#include <string>
using namespace std;


bool qod(string x) {
	int i = 0, j = 0;
	char h[] = "hello";
	while (i < x.length()) {
		if (x[i] == h[j]) {
			j++;
			if (j == 5) { break;  }
		}
		else if (j > 0 && x[i] != x[i - 1]) { j = 0; }
		i++;
	}
	return j == 5 ? true : false;
}

int main() {
	string s, answer;
	cin >> s;
	answer = qod(s) ? "YES" : "NO";
	cout << answer << endl;
	return 0;
}
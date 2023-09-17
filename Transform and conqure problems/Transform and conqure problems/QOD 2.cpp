//#include <iostream>
//
//using namespace std;
//
//bool qod(int n, int m) {
//	bool y = true;
//	if (m == 1) return true;
//	for (int i = n + 1; i <= m; i++) {
//		bool x = true;
//		for (int j = 2; j<= i / j; j++) {
//			if (i % j == 0) {
//				x = false;
//				break;
//			}
//		}
//		if (x == true && i != m || x == false && i == m) { return false; }
//	}
//	return y;
//}
//
//int main() {
//	int n, m;
//	for (int i = 0; i < 3; i++) {
//		cin >> n >> m;
//		string a = qod(n, m) ? "yes" : "no";
//		cout << a << endl;
//	}
//	return 0;
//}

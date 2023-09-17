//#include <iostream>
//#include <algorithm>
//
//using namespace std;
//
//int qod(int n, int m, int f[]) {
//	sort(f, f + m);
//	int min = INT_MAX;
//	for (int i = 0; (i + (n - 1)) < m; i++) {
//		if (((f[i + (n - 1)] - f[i]) < min)) {
//			min = f[i + (n - 1)] - f[i];
//		}
//	}
//	return min;
//}
//
//
//int main() {
//	int n = 4, m = 6, f[6]{10, 12, 10, 7, 5, 22};
//	cout << qod(n, m, f);
//	return 0;
//}
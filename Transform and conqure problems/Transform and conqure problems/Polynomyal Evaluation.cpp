//#include <iostream>
//
//using namespace std;
//
//int plo(int p[], int n, int x) {
//	int f = p[0];
//	int po = 1;
//	for (int i = 0; i < n; i++) {
//		f += po * p[i];
//		po *= x;
//	}
//	return f;
//}
//
//int main() {
//	int arr[6]{ 2, 4, 1, 5, 3, 4 };
//
//	printf("%d", plo(arr, 6, 2));
//	return 0;
//}
//#include <iostream>
//
//
//using namespace std;
//
//
//int change(int c, int h, int m, int l) {
//	int count = 0;
//	while(c > 0) {
//		if (h <= c) {
//			c -= h;
//		}
//		else if (m <= c) {
//			c -= m;
//		}
//		else if (l <= c) {
//			c -= l;
//		}
//		count++;
//	}
//	return count;
//}
//
//int main() {
//	cout << change(25, 10, 5, 1);
//}
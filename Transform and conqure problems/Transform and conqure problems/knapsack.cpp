//#include <iostream>
//#include <algorithm>
//#include <utility>
//using namespace std;
//
//bool cmp (pair<double,double> x,pair<double,double> y)
// {
//			return x.first>y.first;
// }
//double knap(pair<double, double> a[], int n, double k) {
//	pair<double, double> arr[1000];
//	double t = 0;
//	for (int i = 0; i < n; i++) {
//		arr[i].first = a[i].second / a[i].first;
//		arr[i].second = a[i].first;
//	}
//
//	sort(arr, arr + n,cmp);
//	for (int i = 0; i < n; i++) {
//		if (arr[i].second <= k) {
//			k -= arr[i].second;
//			t += (arr[i].second * arr[i].first);
//		}
//		else {
//			t += (arr[i].second * arr[i].first) * ((double)k / (double)arr[i].second);
//			break;
//		}
//	}
//	return t;
//}
//
//int main() {
//	pair<double, double> k[3]{ { 10, 60 }, { 20, 100 }, { 30, 120 } };
//	printf("max val for knapscak is: %f", knap(k, 3,50));
//	return 0;
//}
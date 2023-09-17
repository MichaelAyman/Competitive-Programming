/*#i* nclude <iostream>
#include <algorithm>
using namespace std;

bool unique(int arr[], int n) {
	sort(arr, arr + n);
	for (int i = 0; i < n - 1; i++) {
		if (arr[i] == arr[i + 1]) {
			return 0;
		}
	}
	return 1;
}

int main() {
	int arr[6]{ 1, 3, 2, 5, 6, 1 };
	printf("%s", unique(arr, 6) ? "true" : "false");
	return 0;
}*/
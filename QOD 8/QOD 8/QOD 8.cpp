#include <iostream>
#include <vector>

using namespace std;
typedef vector<vector<int>> v;

int main() {
	int n, m, k, a, b, c, d, e, x, y;
	cin >> n >> m >> k;
	v arr(n);
	for (int i = 0; i < n; i++) {
		arr[i] = vector<int>(m);
		for (int j = 0; j < m; j++) {
			cin >> arr[i][j];
		}
	}
	while (k-- > 0) {
		cin >> a >> b >> c >> d >> e >> x >> y;
		while (b >= 0 || c || d > 0 || e) {
			if (b >= 0) {
				arr[y][x - b] -= a;
				b--;
			}
			if (c > 0) {
				arr[y][x + c] -= a;
				c--;
			}
			if (d > 0) {
				arr[y - d][x] -= a;
				d--;
			}
			if (e > 0) {
				arr[y + e][x] -= a;
				e--;
			}
		}
	}
	for (int i = 0; i < n; i++) {
		for (int j = 0; j < m; j++) {
			printf("%d\t", arr[i][j]);
		}
		printf("\n");
	}
}
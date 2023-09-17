#include <iostream>
#include <math.h>
using namespace std;

int main()
{
    int t, m, n;
    cin >> t;

    while (t--)
    {
        cin >> m >> n;
        cout << (ceil(((double)(m - 2) / 3)) * ceil(((double)(n - 2) / 3))) << endl;
    }
    return 0;
}

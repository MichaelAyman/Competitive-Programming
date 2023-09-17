#include <iostream>
#include <vector>

using namespace std;

int main()
{
    int n, c, p, v = 0;
    cin >> n;
    while (n != 0)
    {
        vector<int> b(n, 0);
        v = 0;
        for (int i = 0; i < n; i++)
        {
            cin >> c >> p;
            p += i;
            if (p >= n || p < 0 || b[p] != 0)
            {
                v = -1;
            }
            else
            {
                b[p] = c;
            }
        }
        if (v == 0)
            for (int i = 0; i < b.size(); i++)
            {
                cout << b[i] << " ";
            }
        else
            cout << v;
        cout << endl;
        cin >> n;
    }
    return 0;
}
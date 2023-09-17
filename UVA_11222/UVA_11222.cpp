#include <iostream>
#include <vector>

using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        vector<int> n;
        vector<vector<int>> A(3, n);
        vector<int> it(1000, 0);
        int z, x;
        vector<int> s(3, 0);
        for (int i = 0; i < 3; i++)
        {
            cin >> z;
            for (int j = 0; j < z; j++)
            {
                cin >> x;
                A[i].push_back(x);
                s[i]++;
                it[A[i][j]]++;
                if (it[A[i][j]] == 2)
                {
                    s[i]--;
                    A[i][j] = 0;
                    A[i - 1][j] = 0;
                    s[i - 1]--;
                }
                if (it[A[i][j]] == 3)
                {
                    s[i]--;
                }
            }
        }
        z = 0;
        for (int i = 0; i < 3; i++)
        {
            if (s[i] > z)
            {
                z = s[i];
            }
        }
        x = 1;
        for (int i = 0; i < 3; i++)
        {
            if (s[i] == z)
            {
                cout << "Case #" << x++ << ":" << endl;
                cout << i + 1 << " " << z;
                for (int j = 0; j < A[i].size(); j++)
                {
                    if (A[i][j])
                    {
                        cout << " " << A[i][j];
                    }
                }
                cout << endl;
            }
        }
    }

    return 0;
}

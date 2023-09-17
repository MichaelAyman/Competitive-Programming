#include <iostream>

using namespace std;

int main()
{
    int t, y, x, to, p, d = 1;
    string c[52];
    cin >> t;

    while (t--)
    {
        y = 0;
        to = 26, p = 27;
        for (int i = 0; i < 52; i++)
        {
            cin >> c[i];
        }
        for (int i = 0; i < 3; i++)
        {
            x = 10;
            if (c[to][0] - '0' >= 2 && c[to][0] - '0' <= 9)
            {
                x = c[to][0] - '0';
            }
            y += x;
            to -= (11 - x);
        }
        cout << "Case " << d++ << ": " << c[y + 25 - to];
    }
    return 0;
}
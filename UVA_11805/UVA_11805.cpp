#include <stdio.h>

using namespace std;

int main()
{
    int t, n, k, p;
    scanf("%d", &t);
    for (int i = 0; i < t; i++)
    {
        scanf("%d%d%d", &n, &k, &p);
        if ((k + p) % n == 0)
        {
            printf("Case %d: %d\n", i + 1, n);
        }
        else
        {
            printf("Case %d: %d\n", i + 1, (k + p) % n);
        }
    }
    return 0;
}
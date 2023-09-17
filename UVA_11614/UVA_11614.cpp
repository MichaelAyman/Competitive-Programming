#include <iostream>
#include <math.h>

using namespace std;

int main()
{
    int n;
    long long s;
    scanf("%d", &n);
    for (int i = 0; i < n; i++)
    {
        scanf("%lld", &s);
        printf("%lld\n", (long long)floor((-1 + sqrt(1 + (8 * s))) / 2));
    }
    return 0;
}
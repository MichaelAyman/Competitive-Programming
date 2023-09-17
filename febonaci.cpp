#include <iostream>

using namespace std;
int f(int n)
{
    if(n<3)
        return 1;
    else
        return f(n-1) + f(n-2);
}
int fit(int n)
{
    int ans(2),a=1,b=2;
    if(n<3)
        return 1;
    for(int i(1);i<n-2;++i)
        {
            ans=a+ans;
            a=b;
            b=ans;
        }
    return ans;
}
int main()
{
    int n;
    cin>>n;
    cout<<f(n)<<endl;
    cout<<fit(n);
    return 0;
}

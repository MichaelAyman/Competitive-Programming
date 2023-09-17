#include <iostream>

using namespace std;
bool palindrome(string x,int i)
{
    if(i>=x.length()-i-1)
        return 1;
    if(x[i]!=x[x.length()-i-1])
        return 0;
    else
        return palindrome(x,i+1);
}

int main()
{
    string x;
    cin>>x;
    if(palindrome(x,0)){cout<<"The string is palindrome\n";}
    else {cout<<"The string is not a palindrome\n";}

    return 0;
}

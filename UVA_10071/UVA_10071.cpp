#include <iostream>

using namespace std;

int solve(int v, int t){
    return (v*2*t);
}

int main(){
    int v = 0, t = 0;
    scanf("%d%d", &v, &t);
    int s = solve(v, t);
    printf("%d", s);
}
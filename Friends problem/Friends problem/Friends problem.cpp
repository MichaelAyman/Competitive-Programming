#include <iostream>
#include <vector>
/*
Michael Henein
*/
using namespace std;
//input f is the number of friends and time complexity is O(f)
int friends(int f) {
    if (f == 0) return 0;     // if f = 0 then there are no combinations possible
    vector<int> n(f, 0);      // initialize a DP vector of size f
    if (n.size() >= 1) {      // if an element exists the first element will be 1
        n[0] = 1;
        if (n.size() >= 2) {  // if 2 elements exist the second element will be 2
            n[1] = 2;
        }
    }
    for (int i = 2; i < n.size(); i++) {
        n[i] = n[i - 1] + (n[i - 2] * i);  // every time the number of elements is incremented by 1 the difference between the new number of combinations and the prior one n[i - 1] is that the new
    }                                    // element will make a pair with each of the other numbers i and the remaining of the elements i - 2 will have n[i - 2] combinations 
                                         //so the new element will pair with i numbers which is then multiplied by n[i - 2] to calculate all of the possible new combinations
    return n[n.size() - 1];
}

int main() {
    int f;
    cin >> f;

    cout << friends(f) << endl;

    return 0;
}

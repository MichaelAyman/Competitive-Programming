#include <iostream>

using namespace std;

struct date
{
    string month;
    int day;
};

int main()
{
    date m;
    cin >> m.month >> m.day;
    if (m.month == "OCT" && m.day == 31 || m.month == "DEC" && m.day == 25)
    {
        cout << "yup" << endl;
    }
    else
    {
        cout << "nope" << endl;
    }
    return 0;
}
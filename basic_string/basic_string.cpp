#include <iostream>
#include <fstream>
#include <vector>
#include <map>
#include <algorithm>
#include <string>
using namespace std;

int main()
{
    string line, out = "";
    bool first = true;
    bool end = false;
    ifstream text("basic_string_in.txt");
    while (!text.eof())
    {
        getline(text, line);
        for (int i = 0; i < line.length() && i < 7; i++)
        {
            if (line[i] != '.')
            {
                break;
            }
            if (i == 6)
            {
                end = true;
            }
        }
        if (end == true)
        {
            cout << out;
            break;
        }
        else
        {
            if (first == true)
            {
                out = line;
                first = false;
            }
            else
            {
                out += " " + line;
            }
        }
    }
    return 0;
}
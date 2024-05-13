#include <bits/stdc++.h>
using namespace std;

int main()
{
    string str;
    cin >> str;
    if (str == "Character")
    {
        cout << 1;
    }
    else if (str == "Integer")
    {
        cout << 2;
    }
    else if (str == "Float")
    {
        cout << 4;
    }
    else if (str == "Double")
    {
        cout << 8;
    }

    return 0;
}
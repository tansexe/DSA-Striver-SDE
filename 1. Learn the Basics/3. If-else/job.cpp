#include <bits/stdc++.h>
using namespace std;

int main()
{
    int age;
    cin >> age;
    if (age < 18)
    {
        cout << "not eligible for job";
    }
    else if (age <= 60)
    {
        cout << "eligible for job";
        if (age > 54)
        {
            cout << " retirement soon";
        }
    }
    else
    {
        cout << "Retirement soon";
    }
    return 0;
}
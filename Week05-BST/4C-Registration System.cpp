#include <iostream>
#include <bits/stdc++.h>

using namespace std;

int main()
{
    int n;
    cin >> n;

    map<string, int> counter;
    string s;
    while (n--)
    {
        cin >> s;
        if (counter.count(s) == 0)
        {
            cout << "OK" << endl;
            counter[s] = 1;
        }
        else
        {
            cout << s << counter[s] << endl;
            counter[s] += 1;
        }
    }
    return 0;
}

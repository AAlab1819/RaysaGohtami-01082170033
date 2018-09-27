#include <iostream>
#include <bits/stdc++.h>
using namespace std;

int count = 0;
int num = 1;

int times(int buttons)
{
    if (count<=buttons)
    {
    num = count+ num;
    count++;
    times(buttons);
    }

return num;
}

int worstCase (int buttons)
{

    int worst_case=0;

    for (int i=0; i<buttons; i++)
    {
      worst_case = worst_case + times(i);
    }
    cout << worst_case << endl;

}

int main()
{
    int buttons;
    int pressed_worstCase;

    cin >> buttons;
    worstCase(buttons);

    return 0;

}

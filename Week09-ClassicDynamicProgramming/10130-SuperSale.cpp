#include <iostream>
#include <bits/stdc++.h>
using namespace std;

int main()
{
    int MAX_WEIGHT=31;
    int total = 0, numPeople;
    int weight,nItems, itemWeight, itemValue;;
    int bestForWeight[MAX_WEIGHT]; // Will store the best value for the weight
    int T;
    cin >> T;

    while (T--)
    {
        for (int i = 0; i < MAX_WEIGHT; ++i)
            bestForWeight[i] = 0;

        cin >> nItems;

        for (int item = 0; item < nItems; ++item)
        {
            cin >> itemValue >> itemWeight;

            for (int weight = MAX_WEIGHT - 1; weight >= itemWeight; --weight)
            {
                bestForWeight[weight] = max(bestForWeight[weight], bestForWeight[weight - itemWeight] + itemValue);
            }
        }
        cin >> numPeople;

        for (int i = 0; i < numPeople; ++i)
        {
            cin >> weight;
            total += bestForWeight[weight];
        }
        cout << total << '\n';
    }
    return 0;
}

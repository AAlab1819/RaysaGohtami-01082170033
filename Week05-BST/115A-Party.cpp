#include <iostream>
#include <bits/stdc++.h>

using namespace std;

int main()
{
    int employees, groups, temp;
    cin >> employees;
    int arr[employees];
    for(int i = 1; i <= employees; i++){
        cin >> arr[i];
    }
    groups = 0;
    for (int i = 1; i <= employees; i++){
        temp = 0;
        for (int j = i; j <= employees && j != -1; j = arr[j]){
            temp++;
        }
        groups = max(groups,temp);
    }
    cout << groups << endl;
    return 0;

}

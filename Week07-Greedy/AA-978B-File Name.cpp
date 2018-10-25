#include <iostream>
#include <bits/stdc++.h>

using namespace std;

int main()
{
    int n;
    cin>>n;
    char array[n];

    for(int i=0;i<n;i++)
    {
        cin>>array[i];
    }

    int total=0;
    for(int i=0;i<n;i++)
    {
        if(array[i]!='x')
        {
            continue;
        }
        int counter=1;
        for(int j=i+1;j<n+1;j++)
        {
            if(counter==3)
            {
                hitung++;
                break;
            }
            if(array[i]!=array[j])
            {
                break;
            }
            else
            {
                counter++;
            }
        }
    }
    cout<<total;
}

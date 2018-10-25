#include <iostream>
#include <bits/stdc++.h>

using namespace std;

int main()
{
    int n;
    cin>>n;
    int teams[n];
    for(int i=0;i<n;i++)
    {
        cin>>teams[i];
    }

    for(int i=0;i<n-1;i++)
    {
        if(teams[i]==0 && teams[i+1]<2)
        {
            cout<<"NO";
            return 0;
        }
        else if(teams[i]<2 && teams[i+1]==0)
        {
            cout<<"NO";
            return 0;
        }
    }
    cout<<"YES";
}

#include <iostream>
#include <bits/stdc++.h>

using namespace std;


int main()
{
    int n;
    int b=0;
    int c=0;
    cin>>n;
    int array[n];

    for(int i=0;i<n;i++)
    {
        cin>>array[i];
        if(array[i]<0)
        {
            c=c+array[i];
        }
        else{b=b+array[i];}
    }
    cout<<b-c;

}

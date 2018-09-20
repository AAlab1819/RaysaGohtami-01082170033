#include <iostream>
#include <bits/stdc++.h>

using namespace std;

int main()
{
    int levels;
    int p;// levels little X can pass
    int q;//levels little Y can pass
    int count=0;

    cin>>levels;
    cin>>p;
    int plevel[p];
    for(int i=0;i<p;i++)
    {
        cin>>plevel[i];
    }
    cin>>q;
    int qlevel[q];
    for(int i=0;i<q;i++)
    {
        cin>>qlevel[i];
    }

    for(int i=1;i<levels+1;i++)
    {
        for(int j=0;j<levels;j++)
        {
            if(i==plevel[j]||i==qlevel[j])
            {
                count++;
                if(count==levels)
                {
                    cout<<"I become the guy.";
                    break;
                }
                break;
            }
        }
    }
    if(count<levels)
    {
        cout<<"Oh, my keyboard!";
    }

    return 0;
}

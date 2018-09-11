#include <iostream>
#include <bits/stdc++.h>
using namespace std;

void CocktailSort(int a[],int s[], int n)
{
    bool swapped= true;
    int start=0;
    int end=n-1 ;
for(int i=start;i<n;i++)
    {
        if(a[i]>a[i+1])
        {
            swap(a[i],a[i+1]);
            swap(s[i],s[i+1]);
            swapped= true;
        }
        if(!swapped)
        {
            break;
            swapped=false;
        }
    }
    for(int i=end;i<0;i--)
    {
        if(a[i]<a[i-1])
        {
            swap(a[i],a[i-1]);
            swap(s[i],s[i-1]);
        }
        if(!swapped)
        {
            break;
            swapped=false;
        }

    }start++;
}

int main()
{
    int dragons;
    int kstrength;
    int dstrength[100];
    int bonus[100];

    cin>>kstrength>>dragons;
    for(int i=0;i<dragons;i++)
    {
        for(int j=i;j<i+1;j++)
        {
            cin>>dstrength[i]>>bonus[i];
        }
    }

    CocktailSort(dstrength,bonus,dragons);

    for(int i=0;i<dragons;i++)
    {
        if(kstrength>=dstrength[i])
        {
            kstrength=kstrength+bonus[i];
            if(i==dragons-1)
            {
                cout<<"YES";
                break;
            }
        }
        else
        {
            cout<<"NO";
            break;

        }
    }


}

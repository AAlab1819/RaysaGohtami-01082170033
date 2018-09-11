#include <iostream>
#include <bits/stdc++.h>

using namespace std;

void OddEvenSort(int a[], int n)
{
    bool isSorted= false;

    while(!isSorted)
    {
        isSorted= true;

        //bubble sort on odd indexed element
        for(int i=1;i<=n-2;i++)
        {
            if(a[i]>a[i+1])
            {
                swap(a[i],a[i+1]);
                isSorted= false;
            }
        }

        //bubble sort on even element
        for(int i=0;i<=n-2;i++)
        {
            if(a[i]>a[i+1])
            {
                swap(a[i],a[i+1]);
                isSorted= false;
            }
        }
    } return;
}

int main()
{
    int secretary;
    int call[100];
    int num=0;

    cin>> secretary;
    for(int i=0;i<secretary;i++)
    {
        cin>>call[i];
    }
    OddEvenSort(call,secretary);

    for(int i=0;i<secretary;i++)
    {
            if(call[i]==call[i+2]&&call[i]!=0)
        {
            num=-1;
            break;
        }
          if(call[i]==call[i+1]&&call[i]!=0)
            {

                num= num+1;
            }
        }
    cout<<num;

    return(0);
}

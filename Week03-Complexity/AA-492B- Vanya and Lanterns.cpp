#include <iostream>
#include <bits/stdc++.h>
#include <iomanip>
using namespace std;

void bubbleSort(double arr[], int n)
{
   for (int i = 0; i < n-1; i++)
    {
      for (int j = 0; j < n-i-1; j++)
        {
            if (arr[j] > arr[j+1])
            {
                swap(arr[j], arr[j+1]);
            }
        }
    }
}

int main()
{
    int length;
    int lanterns;

    cin>>lanterns>>length;
    double point[lanterns];
    for(int i=0;i<lanterns;i++)
    {
        cin>>point[i];
    }

    bubbleSort(point,lanterns);

    double gap;
    gap=(double) length-(double)lanterns+2;//int gap=length-lanterns+2;//the biggest length gap between 2 lantern points

    for(double i=gap;i>0;i--)
    {
        for(int j=0;j<lanterns;j++)
        {
            if(i-1==point[0])
            {
                cout<<setprecision(10)<<fixed;
                cout<<point[0];
                return 0;
            }
            if(i==((length+1)-point[lanterns-1]))
            {
                cout<<setprecision(10)<<fixed;
                cout<<point[lanterns-1];
                return 0;
            }
            if((point[j+1]-point[j])==i)
            {
                cout<<setprecision(10)<<fixed;
                cout<<i/2;
                return 0;
            }
        }
    }
}

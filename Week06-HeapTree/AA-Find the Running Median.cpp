#include <iostream>
#include <bits/stdc++.h>

using namespace std;

void heapify(double arr[], int n, int i)
{
    int largest = i;
    int l = 2*i + 1;
    int r = 2*i + 2;

    if (l < n && arr[l] > arr[largest])
        largest = l;

    if (r < n && arr[r] > arr[largest])
        largest = r;

    if (largest != i)
    {
        swap(arr[i], arr[largest]);
        heapify(arr, n, largest);
    }
}

void heapSort(double arr[], int n)
{
    if(n==0)
    {
        return;
    }
    for (int i = n / 2 - 1; i >= 0; i--)
        heapify(arr, n, i);

    for (int i=n-1; i>=0; i--)
    {
        swap(arr[0], arr[i]);
        heapify(arr, i, 0);
    }
}

void printArray(double arr[], int n)
{
    double median=0;
    if(n==0)
    {
        median=arr[n];
        return;
    }
    if(n%2==0)
    {
        median=(arr[n/2-1]+arr[n/2])/2;
    }
    else if(n%2==1)
    {
        median= arr[n/2];
    }

    cout<<setprecision(1)<<fixed;
    cout<<median<<" ";
}

int main()
{
    int number;
    double median;

    cin>>number;
    double array[number];
    for(int i=0;i<number;i++)
    {
        cin>>array[i];
    }
    for(int i=0;i<number+1;i++)
    {
        for(int j=0;j<i+1;j++)
        {
            heapSort(array, j);
        }
         printArray(array, i);
        cout<<endl;
    }

}

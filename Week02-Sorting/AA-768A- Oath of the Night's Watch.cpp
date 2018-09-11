#include <bits/stdc++.h>
using namespace std;

bool isSorted(int a[], int n)
{
    while ( --n > 0)
        if (a[n] < a[n-1])
            return false;
    return true;
}

// To generate permuatation of the array
void shuffle(int a[], int n)
{
    for (int i=0; i < n; i++)
        swap(a[i], a[rand()%n]);
}

// Sorts array a[0..n-1] using Bogo sort
void bogosort(int a[], int n)
{
    // if array is not sorted then shuffle
    // the array again
    while ( !isSorted(a, n) )
        shuffle(a, n);
}

int main()
{
    int stewards;
     cin>>stewards;
    int values[stewards];



    for(int i=0;i<stewards;i++)
    {
        cin>>values[i];


    }

    bogosort(values,stewards);
    cout<<endl;

    if(stewards-2<0)
    {
        cout<<0;
    }
    else{cout<<stewards-2;}
}



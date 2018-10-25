#include <iostream>
#include <bits/stdc++.h>

using namespace std;

void heapify(int diff[], int new_score[], int id[], int n, int i)
{
    int largest= i;
    int l= 2*i+1;
    int r= 2*i+2;

    if(l<n && diff[l]>diff[largest])
    {
        largest= l;
    }
    if(r<n && diff[r]>diff[largest])
    {
        largest= r;
    }
    if(largest!=i)
    {
        swap(new_score[i], new_score[largest]);
        swap(diff[i], diff[largest]);
        swap(id[i], id[largest]);

        heapify(diff, new_score, id, n, largest);
    }
}

void heapSort(int diff[], int new_score[], int id[], int number)
{
    for(int i=number/2-1;i>=0;i--)
    {
        heapify(diff, new_score, id, number, i);
    }
    for(int i=number-1;i>=0;i--)
    {
        swap(new_score[0], new_score[i]);
        swap(diff[0], diff[i]);
        swap(id[0], id[i]);
        heapify(diff, new_score, id, i, 0);
    }
}

void printArray(int new_score[], int id[], int number)
{
    for(int i=number-1;i>number-6;i--)
    {
        cout<<id[i]<<" "<<new_score[i]<<endl;
    }
}

int main()
{
    int number;
    cin>> number;
    int id[number];
    int old_score[number];
    int new_score[number];
    int post[number];
    int like[number];
    int comment[number];
    int share[number];
    int diff[number];

    for(int i=0;i<number;i++)
    {
        for(int j=i;j<i+1;j++)
        {
            cin>>id[i]>>old_score[j]>>post[j]>>like[j]>>comment[j]>>share[j];
            post[j]=post[j]*50;
            like[j]=like[j]*5;
            comment[j]=comment[j]*10;
            share[j]=share[j]*20;
            new_score[i]=post[j]+like[j]+comment[j]+share[j];
            diff[i]=new_score[i]-old_score[i];
        }
    }

    heapSort(diff, new_score, id, number);
    for(int i=0;i<number;i++)
    {
        if(diff[i]==diff[i+1])
        {
            if(id[i+1]<id[i])
            {
                swap(id[i], id[i+1]);
                swap(new_score[i], new_score[i+1]);
                swap(diff[i], diff[i+1]);
            }
        }
    }
    printArray(new_score, id, number);

}

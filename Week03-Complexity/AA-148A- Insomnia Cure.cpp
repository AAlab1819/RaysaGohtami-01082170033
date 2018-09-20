#include <iostream>
#include <bits/stdc++.h>

using namespace std;

int main()
{
    int dragons; //total dragons
    int punched; //k dragon got punched with frying pan
    int tail; //l dragon got his tail shut to balcony door
    int paws;// m dragon got his paws trampled with sharp heels
    int mom;//n dragon got threatened by calling his mom
    int start=1;

    cin>>punched>>tail>>paws>>mom>>dragons;


    int damaged[dragons];
    int punched1=punched;// to have the original value after punched's value has changed
    int tail1=tail;// to have the original value after tail's value has changed
    int paws1=paws;// to have the original value after paws' value has changed
    int mom1=mom;// to have the original value after mom's value has changed
    int counter=dragons;//to count how many the damaged dragons
    int count=0;

    for(int i=0;i<dragons;i++)
    {
        damaged[i]={start};
        start++;
    }

    for(int i=0;i<dragons;i++)
    {
       if(damaged[i]==punched)
       {
           punched=punched1+punched;
           count++;
       }
       if(damaged[i]==tail)
       {
           tail= tail+tail1;
           count++;
       }
       if(damaged[i]==paws)
       {
           paws= paws+paws1;
           count++;
       }
       if(damaged[i]==mom)
       {
           mom= mom+mom1;
           count++;
       }

      if(count==0)
       {
           counter--;
       }
        count=0;
    }
    cout<<counter;
}

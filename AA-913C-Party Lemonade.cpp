#include <iostream>
#include <bits/stdc++.h>
using namespace std;

int main()
{
  int numType, lemonadeNeed, buyCurrent;
  long long minCost=(long long)4e18;
  long long sum=0;

  cin>>numType>>lemonadeNeed;
  int cost[numType];

  for (int i=0; i<numType; i++) {
    cin>>cost[i];
  }
  for (int i=0; i<numType-1; i++) {
    //IF IT IS CHEAPER TO BUY WITH CURRENT PRICE
    if (cost[i+1]<2*cost[i]) {
        cost[i+1]=cost[i+1];
    }
    //IF IT IS CHEAPER TO BUY 2 BOTTLES OF SMALLER TYPE
    else {
        cost[i+1]=2*cost[i];
    }
  }
  for (int i=numType-1; i>=0; i--) {
    //NEEDED BOTTLES OF TYPE-i
    buyCurrent=lemonadeNeed/(1<<i);
    //FIND PRICE TO BUY BOTTLES OF TYPE-i AS MUCH AS buyCurrent
    sum += (long long)buyCurrent*cost[i];
    lemonadeNeed -= buyCurrent<<i;
    //FIND CHEAPEST COST
    minCost=min(minCost, sum+(lemonadeNeed>0)*cost[i]);
  }

  cout<<minCost<<endl;
  return 0;
}

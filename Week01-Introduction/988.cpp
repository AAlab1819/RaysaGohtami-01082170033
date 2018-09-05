#include <iostream>
#include <stdio.h>

using namespace std;

int main()
{
   int students;
   int members;
   int rating[100];
   int n=0;

   cin>> students >> members;

   for(int i=0; i<students;i++)
   {
       cin>> rating[i];
   }

    int count=students;
    for(int j=0;j<students;j++)
    {
        if(rating[j]==rating[n+1])
        {
            count--;
        }
        if(rating[j]!=rating[n+1])
        {
            n++;
        }
    }

   if(members<=count)
   {
       cout<<"YES"<<endl;

        for(int k=0;k<students;k++)
        {
            for(int l=k+1;l<students;l++)
            {
                if(rating[l]==rating[k])
                {
                  rating[l]=false;

                }

            }
        }


        for (int i=0; i<students; i++)
        {
           if(rating[i]!=false)
           {
               cout << i+1 << " ";
           }
        }
    }


   else
    {
        cout<<"NO"<<endl;
}}










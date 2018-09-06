#include <iostream>
#include <stdlib.h>

using namespace std;

int main()
{
    long long ycrystal; //yellow crystal
    long long bcrystal; //blue crystal
    long long yball;    //yellow ball
    long long gball;    //green ball
    long long bball;    //blue ball

    cin>> ycrystal >> bcrystal;
    cin>> yball >> gball>> bball;

    for(int i=0; i<yball; i++)
    {
        ycrystal= ycrystal-2;

    }

    for( int i=0; i<gball; i++)
    {
        ycrystal=ycrystal-1;
        bcrystal= bcrystal-1;

    }

    for(int i=0;i<bball;i++)
    {
        bcrystal=bcrystal-3;

    }
    if(ycrystal+bcrystal<0)
    {
        cout<<0-(ycrystal+bcrystal);
    }
    else if(ycrystal+bcrystal>0)
    {
        cout<<ycrystal+bcrystal;
    }
}

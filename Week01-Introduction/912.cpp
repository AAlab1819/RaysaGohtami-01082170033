#include <iostream>
#include <stdlib.h>

using namespace std;

int main()
{
    int ycrystal; //yellow crystal
    int bcrystal; //blue crystal
    int yball;    //yellow ball
    int gball;    //green ball
    int bball;    //blue ball

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

#include <iostream>
#include<stdlib.h>
#include<time.h>

using namespace std;

int main()
{
    int deno;   //denominator
    int nume;   //numeration
    int n= nume+ deno;
    srand(time(NULL));

    cin>>n;

    while(nume>deno || nume+deno!=n || deno%nume==0 || nume%deno==0)
    {
        nume= rand()%n+1;
        deno= rand()%n+1;

    }
    cout<<nume<<" "<<deno;

}

#include <iostream>
#include <bits/stdc++.h>

using namespace std;

char cell[1000][1000];
int ans[1000000]={0};
int visited[1000][1000]={0};
int counter=0;
int answer=0;
int length,wide,starting_point,x,y;

void floodFill(int x, int y, int length, int wide)
{
	if(x<0||y<0||x>=length||y>=wide) return;
	if(visited[x][y]!=0) return;
	if(cell[x][y]=='*')
	{
	    counter++;
	    return;
	}

	visited[x][y]=answer;
	floodFill(x-1,y,length,wide);
	floodFill(x+1,y,length,wide);
	floodFill(x,y-1,length,wide);
	floodFill(x,y+1,length,wide);
	return;
}

int main()
{
	cin>>length>>wide>>starting_point;

	for(int i=0; i<length; i++)
	{
		for(int j=0; j<wide; j++)
		{
			cin>>cell[i][j];
		}
	}

	for(int i=0; i<length; i++)
	{
		for(int j=0; j<wide; j++)
		{
			{
			    answer++;
			    counter=0;
			    floodFill(i,j,length,wide);
			    ans[answer]=counter;
		    }
		}
	}

	for(int i=0; i<starting_point; i++)
	{
		cin>>x>>y;

		cout<<ans[visited[x-1][y-1]]<<endl;
	}
	return 0;
}

/*
In a grid there are HH rows and WW columns of cells. All cells are white initially.

Alex picks some hh rows and ww columns. Then all cells that are in these rows or columns are colored black.

How many cells will remain white?
*/


#include <stdio.h>
int main()
{

int x,y;
int a,b;
scanf("%d %d %d %d",&x,&y,&a,&b);
int rest=x-a;
int total=rest*y;
int finals=total - (b*rest);
if (total==0)
{
    finals=0;
}
printf("%d",finals);

    return 0;
}

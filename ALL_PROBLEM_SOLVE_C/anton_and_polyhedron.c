//https://codeforces.com/problemset/problem/785/A
#include <stdio.h>

int main()
{

    char ch[100];
    int n;
    scanf("%d",&n);
    int i=0;
     int count=0,com;
    while (i<n)
    {
 scanf("%s",&ch);

   com=strcmp(ch,"Tetrahedron");
  if (com==0)
  {
      count=count+4;
  }



   com=strcmp(ch,"Cube");
  if (com==0)
  {
      count=count+6;
  }


  com=strcmp(ch,"Octahedron");
  if (com==0)
  {
      count=count+6;
  }

    com=strcmp(ch,"Dodecahedron");
  if (com==0)
  {
      count=count+12;
  }


     com=strcmp(ch,"Icosahedron");
  if (com==0)
  {
      count=count+12;
  }

  i++;

    }

    printf("%d\n",count);

    return 0;
}

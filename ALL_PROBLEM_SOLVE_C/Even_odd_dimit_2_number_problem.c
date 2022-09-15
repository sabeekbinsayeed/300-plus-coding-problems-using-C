#include <stdio.h>
int main()
{

    char n[101];
    int t,i;
    scanf("%d",&t);
    i=0;
    int last;
    for (i=0;i<t;i++)
    {
        scanf("%s",&n);
        int length=strlen(n);
      last=n[length-1]-48;
      if ( last%2==0)
      {
          printf("even\n");
      }
      else

      {
          printf("odd\n");
      }

    }

    return 0;
}

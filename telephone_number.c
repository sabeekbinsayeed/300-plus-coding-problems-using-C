//https://vjudge.net/contest/499108#problem/F
//https://codeforces.com/problemset/problem/1167/A

#include <stdio.h>
int main()
{

  int j=0;
  int times;
  scanf("%d",& times);

  while (j < times)
  {




    int i=0;
    int length;
    scanf("%d",&length);
      char ch[length];
      scanf("%s",&ch);
    if (length<11)
    {
        printf("NO\n");

    }
    if ( ch[0]=='8' && length==11)
    {
        printf("YES\n");

    }
    if ( ch[0]!='8' && length==11)
    {
        printf("NO\n");

    }

    if (length>11)
    {
        int start=0;
        while (i<length)
        {
            if (ch[start]=='8')

            {

                if ((length-start)>=11)
                {
                    printf("YES\n");
                    break;
                }
                else
                {
                    printf("NO\n");
                 break;
                }
            }
            start++;
            i++;





        }
    }



      j++;
  }



    return 0;
}

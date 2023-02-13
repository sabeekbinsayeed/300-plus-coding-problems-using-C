//https://www.chegg.com/homework-help/questions-and-answers/note-must-must-use-c-language-sezu-learning-numbers-letters-learned-write-zero-one--one-da-q99096777

#include <stdio.h>
int main()
{
    int z=0,e=0,r=0,o=0,n=0;
    int times;
    scanf("%d",&times);
    int i=0;
    char ch[100];
     scanf("%s",&ch);
     int count_zero=0, count_one=1;
    while (i<times)
    {

        if (ch[i]=='z')
        {
            z++;
        }
         if (ch[i]=='e')
        {
            e++;
        }
         if (ch[i]=='r')
        {
            r++;
        }
         if (ch[i]=='o')
        {
            o++;
        }
         if (ch[i]=='n')
        {
            n++;
        }

        if (z>0 && e>0 && r>0 && o>0)
        {
           count_zero++;
            z--;
            e--;
            r--;
            o--;

        }
        if (o>0&&n>0&&e>0)
        {
           count_one++;
o--;
n--;
e--;
        }
       // printf("\n%d %d %d %d %d %d %d\n",z,e,r,o,o, n, e);

        i++;

    }

    for (i=0;i<count_one;i++)
    {
        printf("1 ");
    }
      for (i=0;i<count_zero;i++)
    {
        printf("0 ");
    }




    return 0;
}


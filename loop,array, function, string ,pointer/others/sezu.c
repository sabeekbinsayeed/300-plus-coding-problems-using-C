//https://www.chegg.com/homework-help/questions-and-answers/note-must-must-use-c-language-sezu-learning-numbers-letters-learned-write-zero-one--one-da-q99096777

#include <stdio.h>
int main()
{
    int z=0,n=0;
    int times;
    scanf("%d",&times);
    int i=0;
    char ch[times+1];
     scanf("%s",&ch);
     int count_zero=0, count_one=1;
    while (i<times)
    {

        if (ch[i]=='z')
        {
            z++;
        }

         if (ch[i]=='n')
        {
            n++;
        }




        i++;

    }

    for (i=0;i<n;i++)
    {
        printf("1 ");
    }
      for (i=0;i<z;i++)
    {
        printf("0 ");
    }




    return 0;
}

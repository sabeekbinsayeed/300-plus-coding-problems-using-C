#include <stdio.h>
int main()
{
    int n;
    char ch[n];
    scanf("%d",&n);
    scanf("%s",&ch);
    int i=0;
    int remove=0,flag=0;
    for (i=0; i<n; i++)
    {




        if (ch[i]=='x')
        {
            flag++;

        }
        else
        {

            flag=0;
        }

        if (flag>=3)
        {
            remove++;

        }



    }
    printf("%d",remove);


    return 0;
}


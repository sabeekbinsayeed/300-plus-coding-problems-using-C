
#include <stdio.h>

int main()
{

    char ch[100];
    int counter[26]={0};
    scanf("%s",&ch);
    int val_new;

int length=strlen(ch);
int val;

    int i,j=0;
    for (i=0; i<length; i++)
    {

        val=ch[i];
        val_new=val-97;
        counter[val_new]=counter[val_new]+1;
    }

    for (i=0;i<26;i++)
    {
        if (counter[i]!=0)
        {
            char c=i+97;
              printf("%c %d\n",c,counter[i]);
        }


    }



/*
   for (i=0;i<26;i++)
   {
       printf("%c = %d ",counter[i] , counter[i]);
   }




*/


    return 0;
}


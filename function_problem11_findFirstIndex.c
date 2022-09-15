//Write a function named find_lastIndex() which will take a string and a character as parameters and return the last index where the character is found in that string. If it is not found then return -1
int find_firstIndex(char ch[],char c)
{
    int i;
    int length=strlen(ch);
    int index=-1;
    for (i=0;i<length;i++)
    {

        if (ch[i]==c)
        {
            index=i;
            break;
        }
    }


    return index;
}

#include <stdio.h>
int main()
{

    char ch[100];
    gets(ch);
    char c;
    scanf("%c",&c);
   int my_index= find_firstIndex(ch,c);

   printf("%d",my_index);



    return 0;
}

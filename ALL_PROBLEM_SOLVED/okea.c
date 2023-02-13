//https://www.chegg.com/homework-help/questions-and-answers/note-must-must-use-c-language-students-sophomore-year-cse-department-sust-decided-build-hu-q99064791
//lab exam 7 final

#include <stdio.h>
int main()
{
    char ch[100];
    scanf("%s",&ch);
    int i=0;
    int count=0,count_one=0;
    int flag=0;
    int length=strlen(ch);
    int val;

    while (i< length)
    {
        val=ch[i]-'0';
        if (val==0)
        {
            count++;
        }
        else
        {
            count=0;
        }
        if (val==1)
        {
            count_one++;
        }

        else
        {
            count_one=0;
        }

        if(count >=7|| count_one>=7)
        {
            flag=1;
            break;
        }
        i++;

    }
    if (flag==1)
    {

        printf("YES");
    }
    else
    {
        printf("NO");
    }



    return 0;
}

#include <stdio.h>
int main()
{

char ch[100];
scanf("%s",&ch);
if (!strcmp(ch,"january") || !strcmp(ch,"march")|| !strcmp(ch,"may") || !strcmp(ch,"july") || !strcmp(ch,"august")  || !strcmp(ch,"october") || !strcmp(ch,"december") )
{
    printf("31 days\n");
}
else if (!strcmp(ch,"february") || !strcmp(ch,"april")|| !strcmp(ch,"june") || !strcmp(ch,"september") || !strcmp(ch,"november")  )
{
    printf("30 days\n");
}
    return 0;
}
// eita month number die o ashte pare

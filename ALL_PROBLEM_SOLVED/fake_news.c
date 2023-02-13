//https://codeforces.com/problemset/problem/802/G

#include <stdio.h>
int main()
{
    char ch[1001];
    scanf("%s",&ch);
    int length=strlen(ch);
    int i=0,j=0;
    int flag_h=0,flag_e=0,flag_i=0,flag_d=0;

  char temp[6]={'h','e','i','d','i'};

while (i<length)
{

    if (temp[j]==ch[i])
    {
        j++;
    }


i++;

}
if(j==5)
{
    printf("YES");
}
else
{
    printf("NO");


}

    return 0;
}

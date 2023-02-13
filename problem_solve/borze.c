//https://codeforces.com/problemset/problem/32/B
//module 31
#include <stdio.h>

int main()
{

    char ch[201];
    int n;
char dumm;
    int i=0;
     int count=0,com;
      scanf("%s",&ch);

      int flag_dash=0;
for (i=0;i<strlen(ch);i++){

if (ch[i]=='-')
{

    if (flag_dash==1)
    {

        flag_dash=0;
        printf("2");
    }
    else
    {

          flag_dash=1;
    }


}

if (ch[i]=='.')
{



    if (flag_dash==1)
    {

        printf("1");
          flag_dash=0;



    }
    else
    {
        printf("0");


    }




}
}


    return 0;
}

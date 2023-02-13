//https://atcoder.jp/contests/abc060/tasks/abc060_a?lang=en

#include <bits/stdc++.h>
using namespace std;
int main()
{
char ch[100],ch1[100],ch2[100];
scanf("%s",&ch);
scanf("%s",&ch1);
scanf("%s",&ch2);
int length=strlen(ch);
int length_first=ch[length-1];
int second_first=ch1[0];
int length2=strlen(ch1);
char length2_second=ch1[length2-1];
int third_first=ch2[0];
if ( length_first==second_first && length2_second==third_first)
{
    printf("YES");
}
else
{
    printf("NO");
}



    return 0;
}


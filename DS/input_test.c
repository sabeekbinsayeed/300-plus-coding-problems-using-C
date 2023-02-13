#include<stdio.h>
int main()
{
    int a;

    double b;
    char ch;

    char s[39];
    int d[2];
    printf("enter a integer number:\n");
    scanf("%d",&a);
    printf("%d\n",a);
    printf("enter a decimal number:\n");
    scanf("%lf",&b);
    printf("%lf\n",b);
    printf("enter a letter:\n");
  char blank;
scanf("%c", &blank);
    scanf("%c", &ch);
    printf("%c\n", ch);

    printf("the value of blank is %c\n",blank);
    printf("enter two number:\n");
    scanf("%d,%d",&d[0],&d[1]);
    printf("%d %d\n",d[0],d[1]);
    printf("enter your name first part:");
    scanf("%s",s);
    printf("%s",s);


    return 0;


}

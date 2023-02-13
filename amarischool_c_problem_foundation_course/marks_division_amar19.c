#include <stdio.h>
int main()
{

int p,m,c;
scanf("%d %d %d",&p,&m,&c);
float average;

average= (p+m+c)/3.0;
int total;
total=p+m+c;
printf("total marks %d average %f division :",total,average);
if (average>=80)
{
    printf("First division\n");

}
else if(average>=70)
{
printf("Second division\n");
}
else if (average>=60)
{
printf("Third division\n");
}
else{
    printf("no division\n");
}


    return 0;
}

// student er marks dia thakbe, then total marks, division, and average ber korba

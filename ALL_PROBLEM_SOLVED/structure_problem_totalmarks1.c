#include <stdio.h>
struct student {

char name[100];
int roll;
int marks;

};



struct unique {
char name[100];
int roll;
int total;

};
int main()
{


    int i;
    int j;
    struct unique rakib={"rakib",1,0};
    struct unique habib={"habib",2,0};
    struct student ar[5];
    int rakib_sum=0;
    int habib_sum=0;
    for (i=0;i<3;i++)
    {

        printf("loop\n");
        int sum=0;
        scanf("%s %d %d",&ar[i].name,&ar[i].roll,&ar[i].marks);

      if (rakib.roll==ar[i].roll)
      {

          rakib_sum=rakib_sum+ar[i].marks;
      }

      if (habib.roll==ar[i].roll)
      {

          habib_sum=habib_sum+ar[i].marks;
      }
      }
  rakib.total=rakib_sum;
  habib.total=habib_sum;



printf("%s %d  %d %s  %d %d\n",rakib.name,rakib.roll,rakib.total,habib.name,habib.roll,habib.total);



    return 0;
}

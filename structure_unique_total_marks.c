#include <stdio.h>
#include <stdbool.h>
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
    struct unique unique_student[5];

    struct student ar[5];
    bool found=false;
int sum=0;
    int m=0;
    for (i=0;i<3;i++)
    {
sum=0;

        scanf("%s %d %d",&ar[i].name,&ar[i].roll,&ar[i].marks);

        for (j=0;j<m;j++)
        {

            if (ar[i].roll==unique_student[j].roll)
            {
                sum=sum+ar[i].marks;

                found=true;

   unique_student[j].total+=sum;


            }




        }


        if( found==false)
        {


            strcpy( unique_student[m].name,ar[i].name);
            unique_student[m].roll=ar[i].roll;
                     unique_student[m].total=ar[i].marks;
                     m++;



        }


      }



for (i=0;i<m;i++)
    {


        printf("%s %d %d\n",unique_student[i].name,unique_student[i].roll,unique_student[i].total);
    }



    return 0;
}

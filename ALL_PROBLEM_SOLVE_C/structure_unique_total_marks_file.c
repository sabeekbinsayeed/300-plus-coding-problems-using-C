
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
    FILE *inputFile;
inputFile=fopen("input22.txt","r");
if (inputFile==NULL)
{
    printf("not file found");
    return 0;
}
FILE *outputFile;
outputFile=fopen("output22.txt","w");


    int i;
    int j;
    struct unique unique_student[5];


    struct student ar[5];
    bool found=false;
int sum=0;
    int m=0;
    for (i=0;i<5;i++)
    {
sum=0;

        fscanf(inputFile,"%s %d %d",&ar[i].name,&ar[i].roll,&ar[i].marks);

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




for (i=0;i<m-1;i++)
    {
        printf("kire bhai");



        for (j=i+1;j<m;j++)
        {

if (unique_student[i].total<unique_student[j].total)
{
    struct unique temp=unique_student[i];
   unique_student[i]=unique_student[j];
   unique_student[j]=temp;
}
        }



    }

for (i=0;i<m;i++)
    {


        fprintf(outputFile,"%s %d %d\n",unique_student[i].name,unique_student[i].roll,unique_student[i].total);

        printf("%s %d %d\n",unique_student[i].name,unique_student[i].roll,unique_student[i].total);
    }


    return 0;
}

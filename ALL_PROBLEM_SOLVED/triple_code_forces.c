#include <stdio.h>
int main()
{

    int n;
    scanf("%d",&n);
    int i=0;
    int count=0,k;
    int times, j;
    int result=0;
    int flag=0;

    while (i<n)
    {


        scanf("%d",&times);

        int number;
        int arr[times];

       for (j=0;j<times;j++)
       {
           scanf("%d",&arr[j]);
       }


       for (j=1;j<times;j++)
      {
          count=0;

               for (k=j-1;k>=0;k--)
          {

              if (arr[j]==arr[k])
              {
                  count++;
                  if (count==2)
                  {

                     result=arr[j];
                     flag=1;
                     break;
                  }

              }


          }

      }
      if (flag==0)
      {

            printf("-1\n");
      }
      else{
          printf("%d\n",result);
      }
      result=0;
      flag=0;






        i++;
    }



    return 0;
}

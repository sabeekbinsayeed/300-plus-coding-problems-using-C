//https://vjudge.net/problem/AtCoder-abc249_a
#include <stdio.h>
int main()
{
    int a,b,c,d,e,f,x;
    scanf("%d",&a);
    scanf("%d",&b);
    scanf("%d",&c);
    scanf("%d",&d);
    scanf("%d",&e);
    scanf("%d",&f);
    scanf("%d",&x);
    // 4 3 3 6 2 5 10
    int total_sec=0;


int temp=x;
    while(1)
    {
         if(temp-a<=0)
        {

             total_sec=total_sec+ temp;
            break;
        }
        temp=temp-a;


          total_sec=total_sec+ a;

           if(temp-c<=0)
        {


            break;
        }
          temp=temp-c;


    }
    int distance_t=total_sec*b;
  //  printf("total distance : %d",distance_t);


// second part

    total_sec=0;


 temp=x;
    while(1)
    {
         if(temp-d<=0)
        {

             total_sec=total_sec+ temp;
            break;
        }
        temp=temp-d;


          total_sec=total_sec+ d;

           if(temp-f<=0)
        {


            break;
        }
          temp=temp-f;


    }
    int distance_a=total_sec*e;
  //  printf("total distance : %d",distance_a);

  if ( distance_t> distance_a)
  {
      printf("Takahashi\n");

  }
  else if ( distance_t< distance_a)
  {
      printf("Aoki");
  }
  else if (distance_t==distance_a)
  {
      printf("Draw");

  }





    return 0;
}

//Make a function named odd_even() which takes an integer value and tells whether this value is even or odd. You need to do it in 4 ways:
//i) Has return + Has parameter
//ii) No return + Has parameter
//iii) Has return + No parameter
//iv) No return + No parameter

#include <stdio.h>
//i) Has return + Has parameter
/*
int odd_even(int n)
{
    int result;
    if (n%2==0)
    {

        result=1;
    }
    else
    {
        result=0;
    }
    return result;

}
*/

//ii) No return + Has parameter
/*
void odd_even(int n)
{
    int result;
    if (n%2==0)
    {

        result=1;
    }
    else
    {
        result=0;
    }
   if (result==1)
  {
      printf("even");
  }
  else
  {
      printf("odd");
  }

}
*/

//has return and no paramter
/*
int odd_even()
{
    int n;
    scanf("%d",&n);
    int result;
    if (n%2==0)
    {

        result=1;
    }
    else
    {
        result=0;
    }
    return result;

}
*/


//no return and no parameter
void odd_even()
{
    int n;
    scanf("%d",&n);
    int result;
    if (n%2==0)
    {

        result=1;
    }
    else
    {
        result=0;
    }
     if (result==1)
  {
      printf("even");
  }
  else
  {
      printf("odd");
  }


}
int main()
{

    int n;
    odd_even();

    //scanf("%d",&n);
/*
      int result=odd_even();
  if (result==1)
  {
      printf("even");
  }
  else
  {
      printf("odd");
  }
    /*
    int result=odd_even(n);
  if (result==1)
  {
      printf("even");
  }
  else
  {
      printf("odd");
  }

  */
    return 0;
}

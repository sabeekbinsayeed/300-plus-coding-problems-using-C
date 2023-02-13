#include <stdio.h>

void add()
{
    int a,b;
    printf("enter two values to add in add function \n");
    scanf("%d %d",&a,&b);
    int sum=a+b;
    printf("sum is %d in add function\n",sum);
}

void sub(int a, int b)
{
    int sub=a-b;
    printf("sub  is %d in sub function",sub);
}

int product()
{
    int a,b;
    printf("enter two values to multiply in product function \n");
    scanf("%d %d",&a,&b);
    int product=a*b;
    return product;
}

int main()
{
add();

int x,y;
  printf("enter two values to sub in main function \n");
scanf("%d %d",&x,&y);
sub(x,y);

int res_product=product();
printf("product is %d in main function\n",res_product);


    return 0;
}

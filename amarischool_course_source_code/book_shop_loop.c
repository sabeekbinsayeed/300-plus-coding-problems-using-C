#include <stdio.h>
int main()
{
  int book_number;
  scanf("%d",&book_number);
  int current_book_price;
  int total_price=0;
  int i=0;
  for (i=0;i<book_number;i++)
  {
      scanf("%d",&current_book_price);
      total_price=total_price+ current_book_price;
  }

  if (total_price<1000)
  {
      total_price=total_price+50;
  }
  printf("total price is %d",total_price);

    return 0;
}

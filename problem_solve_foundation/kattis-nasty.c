#include <stdio.h>
int main()
{

    int n,r,e,c;
    scanf("%d",&n);
    int i=0;
    while (i<n){
      scanf("%d %d %d",&r,&e,&c);

    int revenue=e-c;
    if (revenue>r){
        printf("advertise\n");
    }
    else if (revenue==r){
        printf("does not matter\n");
    }

    else if(revenue<r){
        printf("do not advertise\n");
    }

      i++;
    }



    return 0;
}

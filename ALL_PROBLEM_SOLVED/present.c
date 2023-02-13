#include <stdio.h>
int main()


{
    int a,b,c,fiveCount=0,sevenCount=0;

scanf("%d %d %d",&a,&b,&c);


    if (a==5 )
    {
        fiveCount=fiveCount+1;
    }
     if (b==5){
  fiveCount=fiveCount+1;
    }
      if (c==5){
  fiveCount=fiveCount+1;
    }
      if (a==7){
 sevenCount=sevenCount+1;
    }

      if (b==7){
 sevenCount=sevenCount+1;
    }

      if (c==7){
 sevenCount=sevenCount+1;
    }



    if(fiveCount==2 && sevenCount==1)
    {
        printf("YES");
    }
    else{
        printf("NO");
    }

    return 0;
}

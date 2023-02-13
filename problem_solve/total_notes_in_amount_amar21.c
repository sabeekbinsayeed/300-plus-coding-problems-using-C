// amount dibe 500,100,50,20,10 tk er koeta note ase
#include <stdio.h>
int main()
{

int amount;
scanf("%d",&amount);
int five_hundred,one_hundred,fifty,twenty,ten,rest;
five_hundred=amount/500;
rest=amount%500;
one_hundred=rest/100;
rest=rest%100;

fifty=rest/50;
rest=rest%50;


twenty=rest/20;
rest=rest%20;

ten=rest/10;
rest=rest%10;

printf("after 10 %d \n",rest);

printf("%d 500tk notes, %d 100tk notes, %d 50 tk notes, %d 20 tk notes, %d 10 tk notes",five_hundred,one_hundred,fifty,twenty,ten);
    return 0;
}

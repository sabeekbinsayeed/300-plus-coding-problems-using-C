#include <stdio.h>
int main()
{
int amount;
scanf("%d",&amount);
int five_hundred=0,one_hundred=0,fifty=0,twenty=0,ten=0;
if (amount>=500)
{
    five_hundred=amount/500;
    amount=amount - (five_hundred*500);
}
 if (amount>=100)
{
    one_hundred=amount/100;
    amount=amount - (one_hundred*100);
}

 if (amount>=50)
{
    fifty=amount/50;
    amount=amount - (fifty*50);
}

 if (amount>=20)
{
    twenty=amount/20;
    amount=amount - (twenty*20);
}
 if (amount>=10)
{
    ten=amount/10;
    amount=amount - (ten*10);
}

printf("%d 500tk notes, %d 100tk notes, %d 50 tk notes, %d 20 tk notes, %d 10 tk notes",five_hundred,one_hundred,fifty,twenty,ten);
    return 0;
}

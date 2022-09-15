//https://vjudge.net/contest/499108#problem/J
//lab exam 7

#include <stdio.h>
int main()
{

 char ch[100];
     scanf("%s",&ch);
     int i=0;
     int length=strlen(ch);
     int val;
     int uppercase=0;
     int first_lowercase=0;
     while (i<length)
     {
         if (i==0)
         {
              val=ch[i]-'a';
         if (val<0)
         {
             //mane eita boro hater ase
uppercase++;

         }
         else
         {
first_lowercase++;
         }

         }

         else
         {
   val=ch[i]-'a';
         if (val<0)
         {
             //mane eita boro hater ase
uppercase++;

         }

         }









         i++;
     }


    if (length==uppercase || ((length-1)==uppercase && first_lowercase==1))
    {

        i=0;
        while  (i<length)
        {
            if (ch[i]>= 'a' && ch[i]<='z')
            {
                ch[i]=ch[i]-32;

            }
            else
            {
                 ch[i]=ch[i]+32;

            }
            i++;

        }

    }

     printf("%s\n",ch);

    return 0;
}





/*

এমন একটা প্রোগ্রাম লিখ যা 0/1 ইনপুট নেয়। এবং ইনপুট টাকে প্রিন্ট করে। যদি 0/1 বাদে অন্য কিছু ইনপুট দেওয়া হয় তাহলে প্রোগ্রামটি আবার ইনপুট চাবে।  (Use do-while loops).
Example:
Enter 0/1: 5
Wrong Input. Try Again.
	Enter 0/1: -1
Wrong Input. Try Again.
	Enter 0/1: 0
You entered 0.


*/
#include <stdio.h>
int main()
{
    int num;

   do
   {
       printf("number: \n");
       scanf("%d",&num);

       if (num==0 || num==1)
       {
           printf("You entered %d\n",num);
           break;
       }
       printf("wrong Input. Try again\n");
   } while (1);

    return 0;
}


/*
Write a function named change_values() which will take an array of integers ar[], the size of the array N, and two more integer values L and R. You need to change all the values of the array between L-th index and R-th index to 0. Print the array in the  main() function. Here, (0 <= L,R < N  and 0 < N <=100000 and 0 <= ar[i] <= N)

অনুবাদঃ change_values() নামে একটি ফাংশন লিখ যা একটি পূর্ণসংখ্যার এরে ar[], অ্যারের সাইজ N এবং আরও দুটি পূর্ণসংখ্যা L এবং R নেবে। তোমাকে L-th ইন্ডেক্স থেকে R-th ইন্ডেক্স পর্যন্ত অ্যারের সমস্ত মান পরিবর্তন করে 0 করতে হবে। main() ফাংশনে অ্যারে টি প্রিন্ট কর। এখানে, (0 <= L,R < N এবং 0 < N <=100000 এবং 0 <= ar[i] <= N)

For example:
ar[]={10,20,30,40,50}, N=5, L=1, R=3 then the array will become ar[]={10,0,0,0,50} after the operation.

*/
#include <stdio.h>

void change(int ar[],int l,int r)
{
    int i;
for (i=l;i<=r;i++)
{

    ar[i]=0;

}

}
int main()
{
    int n;
    scanf("%d",&n);
    int i;
    int ar[n];
    for (i=0;i<n;i++)
    {
        scanf("%d",&ar[i]);
    }

    int l;
    int r;
    scanf("%d %d",&l,&r);
     change(ar,l,r);
for (i=0;i<n;i++)
{
    printf("%d ",ar[i]);
}


    return 0;
}

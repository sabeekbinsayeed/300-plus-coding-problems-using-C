/*
Take an array name ar[] of size N where the values will be unique. Also take another integer value named mul as input. Print “YES” if you can make  mul by multiplying two different values from that array. Otherwise, print “NO”. Here, (0 < N <= 100 and 0 <= ar[i] <= N and 0 <= mul <= 10000)

অনুবাদঃ N সাইজের একটি অ্যারে ar[] নাও যেখানে মানগুলি ইউনিক হবে। এছাড়াও ইনপুট হিসাবে mul নামে আরেকটি পূর্ণসংখ্যা নাও। "YES" প্রিন্ট কর যদি তুমি সেই অ্যারে থেকে দুটি ভিন্ন ভিন্ন মান গুণ করে mul তৈরি করতে পারো। অন্যথায়, "NO" প্রিন্ট কর। এখানে, (0 < N <= 100 এবং 0 <= ar[i] <= N এবং 0 <= mul <= 10000)

For example:
Input 1:
6
2 4 6 1 5 3
25
Output 1:
NO

Input 2:
5
2 3 1 5 4
15
Output 2:
YES




*/


#include <stdio.h>
int main()
{
    int n;
    scanf("%d",&n);
    int arr[n];
    int i=0;
    int flag=0;
    int j;
    for (i=0;i<n;i++)
    {
        scanf("%d",&arr[i]);
    }
    int product;
    scanf("%d",&product);
    for (i=0;i<n;i++)
    {

        for (j=i+1;j<n;j++)
        {
            if (arr[j]*arr[i]==product)
            {
                flag=1;
                break;
            }

        }
    }

    if (flag==1)
    {
printf("YES");
    }

    else{
            printf("NO");

    }

    return 0;
}

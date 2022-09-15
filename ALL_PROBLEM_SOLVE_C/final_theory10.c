/*
It’s time to say Goodbye. But not to programming right? So, print “Goodbye” 100 times. Isn’t that so easy? No, you’re wrong. Print “Goodbye” 100 times, but if i-th (where i means 1 to 100) term is an odd number then print “I Love Programming!”

অনুবাদঃ বিদায় বলার সময় এসেছে। কিন্তু প্রোগ্রামিং কে নয় তাই না? তাই, “Goodbye” প্রিন্ট কর ১০০ বার। অনেক সহজ তাই না? না, ভুল তুমি। “Goodbye” প্রিন্ট করো ১০০ বার কিন্তু i-তম (এখানে i বলতে ১ থেকে ১০০ বুঝাচ্ছে) যদি বিজোড় সংখ্যা হয় তাহলে প্রিন্ট করবে “I Love Programming!”

For example:
I Love Programming!
Goodbye
I Love Programming!
Goodbye

This sequence will continue….

*/

#include <stdio.h>
int main()
{
int i;
for (i=0;i<100;i++)
{
    if (i%2==0)
    {
        printf("I Love Programming!\n");
    }
    else
    {
        printf("Goodbye\n");
    }
}

    return 0;
}

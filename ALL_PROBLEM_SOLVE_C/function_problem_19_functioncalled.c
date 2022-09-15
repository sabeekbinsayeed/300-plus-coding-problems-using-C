//Write a function that takes no input and prints the number of times the function has been called. Hint: Use static variables.
#include<stdio.h>
int called()
{
static int count = 0;
count++;
printf("%d times called\n",count);
}

int main()
{
called();
called();
return 0;
}

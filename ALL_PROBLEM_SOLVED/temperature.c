#include <stdio.h>
int main()
{

    int n;
    int count=0,i=0;
    int temperature;
    scanf("%d",&n);
    while (i<n){
        scanf("%d",&temperature);
        if (temperature<0){
            count++;
        }
        i++;
    }

    printf("%d",count);
}

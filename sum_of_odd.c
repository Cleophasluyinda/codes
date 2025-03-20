#include <stdio.h>

int main()
{
    int sum = 0;
    int i;
    for (i = 3; i <= 100; i = i+2)
    {
        sum = sum + i;
    }

    printf("The sum of the odd numbers is:%d\n",sum);
    return 0;
}
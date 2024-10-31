#include <stdio.h>
#include <stdlib.h>

int main()
{
    int counter = 0;
    int num;
    printf("enter a number: ");
    scanf("%d", &num);
    num = abs(num);
    while (num > 1)
    {
        counter++;
        num = num / 10;
    }
    printf("The number of digits in number is %d\n", counter);
    return 0;
}
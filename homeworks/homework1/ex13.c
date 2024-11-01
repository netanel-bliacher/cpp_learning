#include <stdio.h>
#include <stdlib.h>

int main(){
    int num;
    int last_digit;
    int sum = 0;
    printf("enter a number: ");
    scanf("%d", &num);
    num = abs(num);
    while (num > 1)
    {
        last_digit = num % 10;
        if (0 == last_digit % 2)
        {
            sum = last_digit + sum;
        }
        num = num / 10;
    }
    printf("The number of odd digits: %d\n", sum);
    return 0;
}
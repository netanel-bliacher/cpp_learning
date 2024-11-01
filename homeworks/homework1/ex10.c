#include <stdio.h>
#include <stdlib.h>

int main(){
    int odd_counter = 0;
    int num;
    int last_digit;
    printf("enter a number: ");
    scanf("%d", &num);
    num = abs(num);
    while (num > 1)
    {
        last_digit = num % 10;
        if (0 == last_digit % 2)
        {
            odd_counter++;
        }
        num = num / 10;
    }
    printf("The number of odd digits: %d\n", odd_counter);
    return 0;
}
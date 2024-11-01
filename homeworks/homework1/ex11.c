#include <stdio.h>
#include <stdlib.h>

int main(){
    int odd_counter = 0;
    int num;
    int last_digits = 0;
    printf("enter a number: ");
    scanf("%d", &num);
    num = abs(num);
    while (num > 1)
    {
        last_digits = num % 10;
        if (1 == last_digits % 2)
        {
            odd_counter++;
        }
        num = num / 10;
    }
    printf("the number of odd ditgit is: %d\n", odd_counter);
    return 0;
}

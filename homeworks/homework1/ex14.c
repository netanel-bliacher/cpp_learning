#include <stdio.h>

int main(){
    int num;
    int last_ditgit;
    int sum = 0;
    printf("Enter your number please: ");
    scanf("%d", &num);
    while (num > 1)
    {
        last_ditgit = num % 10;
        if (last_ditgit != 7)
        {
            sum = last_ditgit + sum;
        }
        num = num / 10;
    }
    printf("summe of your number with out 7 is: %d\n", sum);
    return 0;
}
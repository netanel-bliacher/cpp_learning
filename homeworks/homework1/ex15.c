#include <stdio.h>

int main()
{
    int num;
    int last_digit = 0;
    int num_f;
    printf("Enter please, your number: ");
    scanf("%d", &num);
   num_f = num;
    if (0 == num_f % 7)
    {
        printf("boom");
    }
    while (num_f > 1)
    {
        last_digit = num_f % 10;
        if (7 == last_digit)
        {
            printf("Boom");
            break;
        
        }
        num_f = num_f / 10;
    }
    printf("%d\n", num);
    return 0;
}

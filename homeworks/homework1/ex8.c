#include <stdio.h>

int input_number()
{
    // Define variable:
    int num;
    //`read number into variable
    int result = scanf("%d", &num);
    // In case of success
    if (result == 1)
    {
        return num;
    }
    else
    {
        printf("Failed to read an integer.\n");
        return -1;
    }
}

int main()
{

    printf("enter lower border: ");
    int lower_border = input_number();
    if (lower_border == -1)
        return 0;
    printf("enter upper border: ");
    int upper_border = input_number();
    if (upper_border == -1)
        return 0;

    if (lower_border < upper_border)
    {
        for (int num = lower_border; num <= upper_border; num++)
        {
            printf("%d\n", num);
        }
    }
    else
    {
        for (int num = lower_border; num >= upper_border; num--)
        {
            printf("%d\n", num);
        }
    }
    return 0;
}
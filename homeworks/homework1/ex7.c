#include <stdio.h>

int is_div(int test_num, int divider)
{
    if (test_num%divider == 0){
        return 1;
    }
    return 0;
}

int main()
{

    for (int i = 1; i < 100; i++)
    {
        if (is_div(i, 4) && is_div(i, 6))
        {
           printf("%d\n", i);
        }
    }
return 0;
}

#include <stdio.h>
#include <stdlib.h>

int main(){
    int num_counter = 0;
    int num;
    printf("Enter please your number: ");
    scanf("%d", &num);
    num = abs(num);
    while (num > 0)
    {
       num = num / 10;
        num_counter++;
    }
    printf("The number of digits: %d\n", num_counter);
    return 0;
}
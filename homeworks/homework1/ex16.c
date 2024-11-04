#include <stdio.h>

int main(){
    int num;// input nubers
    int counter = 0;
    int cur_num = 1;
    printf("enter please your number: ");
    scanf("%d", &num);
    while (num > cur_num)
    {
        printf("%d\n", cur_num);
        counter++;
        cur_num = counter * 7;
    }
    printf("%d\n", num);
    return 0;
}
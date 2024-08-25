#include <cs50.h>
#include <stdio.h>


int main(void)
{
    // 線形探索
    int numbers[] = {4, 6, 8, 2, 7, 5, 0};

    for (int i = 0; i < 7; i++)
    {
        if (numbers[i] == 0)
        {
            printf("Found\n");
            return 0;
        }

    }
    printf("Not found\n");
    return 1;
}
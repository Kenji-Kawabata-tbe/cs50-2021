#include <stdio.h>
#include <cs50.h>

int main(void)
{
    int n = get_int("n: ");

    // If n is even
    // %は余り、==は等価演算子
    if (n % 2 == 0)
    {
        printf("even\n");
    }
    else
    {
        printf("odd\n");
    }


}
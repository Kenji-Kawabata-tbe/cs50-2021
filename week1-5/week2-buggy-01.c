#include <stdio.h>
#include <cs50.h>

int get_nagative_int(void);

int main(void)
{
    int i = get_nagative_int();
    printf("%i\n", i);
}

int get_nagative_int(void)
{
    int n;
    do
    {
        n = get_int("Negative Integer: ");
    }
    while (n < 0);
    return n;
}
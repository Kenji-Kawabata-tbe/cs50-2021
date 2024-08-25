#include <cs50.h>
#include <stdio.h>

int main(void)
{
    string name = get_string("Name: ");

    int i = 0;
    while (name[i] != '\0')//\0はNUL
    {
        i++;
    }
    printf("%i\n", i);
}
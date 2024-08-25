#include <cs50.h>
#include <stdio.h>

// string.cのstrlenを自分で実装するならこんなかんじ
int string_length(string s);
int main(void)
{
    string name = get_string("Name: ");
    int length = string_length(name);
    printf("%i\n", length);
}

int string_length(string s)
{
    int i = 0;
    while (s[i] != '\0')
    {
        i++;
    }
    printf("%i\n", i);
    return i;
}
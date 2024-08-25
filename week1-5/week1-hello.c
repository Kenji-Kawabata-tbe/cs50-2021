// printfなどの標準入出力用のライブラリ
#include <stdio.h>
// get_stringを使うためのライブラリ
#include <cs50.h>

int main(void)
{
    printf("hello, world\n");
    string answer = get_string("What's your name? ");
    // %sはstringのs
    printf("hello, %s\n", answer);
    int x = get_int("x: ");
    int y = get_int("y: ");
    printf("%i\n", x + y);

    if (x < y)
    {
        printf("x is less than y\n");
    }
    else if (x > y)
    {
        printf("x is grater than y\n");
    }
    else
    {
        printf("x is equal to y\n");
    }



}
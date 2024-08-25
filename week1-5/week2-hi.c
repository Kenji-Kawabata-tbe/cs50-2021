#include <stdio.h>
#include <cs50.h>

int main(void)
{
    char c1 = 'H';
    char c2 = 'I';
    char c3 = '!';

    //printf("%c%c%c\n", c1, c2, c3);

    //この場合、ASCII値が表示される
    //C言語はASCIIあるいはそれに相当するUnicodeについて知っていて
    //その変換を自動的にやってくれるとも言える
    //printf("%i %i %i\n", c1, c2, c3);
    //これを暗黙的にやっている
    //printf("%i %i %i\n", (int) c1, (int) c2, (int) c3);

    string s = "HI!";
    //printf("%s\n", s);

    // stringは文字の配列。個々の文字にアクセスし整数に変換できる。
    //printf("%i %i %i\n", s[0], s[1], s[2]);

    // この場合、s[3]は存在しないので0が返ってくる
    printf("%i %i %i %i\n", s[0], s[1], s[2], s[3]);
}
#include <stdio.h>
#include <stdlib.h>

int main(void)
{
    // これはOK
    //int x;
    //printf("x: ");
    //scanf("%i", &x);
    //printf("x: %i\n", x);

    // これはsに割り当てるメモリがないのでエラーになる
    //char *s;
    //printf("s: ");
    //scanf("%s", s);
    //printf("s: %s\n", s);


    // 明らかに5文字を超える文字数を入れるとエラーになる。get_stringは内部でその分のメモリを確保する処理を行っている。
    //char s[4];
    //printf("s: ");
    //scanf("%s", s);
    //printf("s: %s\n", s);

    char *s = malloc(4);
    printf("s: ");
    scanf("%s", s);
    printf("s: %s\n", s);

}
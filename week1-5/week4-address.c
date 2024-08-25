
#include <stdio.h>

int main(void)
{
    int n = 50;

    // *pでpをポインタにすることができる。
    // &nでnのアドレスが何かを調べる。
    // ここではnのアドレスをポインタpに格納している
    int *p = &n;
    printf("%i\n", n);
    // %pはポインタやアドレスのためのフォーマット
    printf("%p\n", p);
    // この場合、nの値が表示される
    printf("%i\n", *p);
}
// preprocessing
// 使いたい関数がそこにあるわけではないので、どこかからインポートしないといけない。
// printfを使いたかったらstdio.hから持ってくる必要がある。
// 他の場所にあるstdio.hを見つけてそれらを一番上のコードに自動的にコピペするのと同等なことをしている
#include <stdio.h>
#include <cs50.h>

int main(void)
{
    //printf("hello, world\n");
    string name = get_string("What's your name? ");
    printf("hello, %s\n", name);
}
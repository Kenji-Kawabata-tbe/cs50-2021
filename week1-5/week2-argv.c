#include <stdio.h>
#include <cs50.h>

// argcは引数の数。コマンドラインに入力された単語の総数
// argvはコマンドラインに入力したすべての単語の配列
int main(int argc, string argv[])
{
    // これだとプログラム名が表示される。./week2-argv afefの場合、配列の最初はファイル名である./week2-argvになるから
    //printf("hello, %s", argv[0]);

    //printf("hello, %s", argv[1]);

    if (argc == 2)
    {
        printf("hello, %s", argv[1]);

    }
    else{
        printf("hello, world\n");
    }
}
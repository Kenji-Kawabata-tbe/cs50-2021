#include <stdio.h>
#include <cs50.h>

// voidは空って意味。この場合、戻り値も引数も
//void meow(void)
//{
//    printf("meow\n");
//}

// 宣言だけ先頭でやって処理内容は後ろに書くこともできる
// この場合、戻り値なし、引数int
void meow(int n);

int main(void)
{
    for (int i = 0; i < 3; i++)
    {
        //printf("meow\n");
        meow(3);
    }
}


void meow(int n)
{
    printf("meow\n");
}


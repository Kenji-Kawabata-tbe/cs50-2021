#include <stdio.h>
#include <stdlib.h>

int main(void)
{
   //int *x = malloc(3 * sizeof(int));
   //// ・ホントは0-2までしかないのに、3にアクセスしているからバッファオーバーフロー
   //// ・freeで開放していないのでメモリリークになる。
   //// しかし実行してもエラーにはならない。valgrindコマンドで確認できる。
   //x[1] = 72;
   //x[2] = 73;
   //x[3] = 33;

   int *x = malloc(3 * sizeof(int));
   x[0] = 72;
   x[1] = 73;
   x[2] = 33;
   free(x);
}
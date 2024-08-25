#include <stdio.h>
#include <stdlib.h>

int main(void)
{
    // これはスタックにメモリを置く
    //int list[3];
//
    //list[0] = 1;
    //list[1] = 2;
    //list[2] = 3;
//
    //for (int i = 0; i < 3; i++)
    //{
    //    printf("%i\n", list[i]);
    //}

    //サイズ3の配列を動的に確保する
    //mallocはヒープにメモリを置く。ヒープに置く場合は後でメモリのサイズを変更できる。
    int *list = malloc(3 * sizeof(int));
    if (list == NULL)
    {
        return 1;
    }

    // 配列に3つの数値を入れる
    list[0] = 1;
    list[1] = 2;
    list[2] = 3;

    //// listに値を追加する場合、これだと上手くいかない。
    //// 最初のlistの値を壊してしまっている。
    //list = malloc(4 * sizeof(int));
    //list[3] = 4;

    ////新しくサイズ4の配列を確保する
    //int *tmp = malloc(4 * sizeof(int));
    //if (tmp == NULL)
    //{
    //    free(list);
    //    return 1;
    //}
    //// 古い配列から新しい配列に数値をコピー
    //for (int i =0; i < 3; i++)
    //{
    //    tmp[i] = list[i];
    //}
    //// 4番目の数値を新しい配列に追加
    //tmp[3] = 4;
//
    //// これはなくても実行できるが、valgrindではエラーになっている
    //free(list);
//
    //// 古い配列から新しい配列に数値をコピー
    //list = tmp;
//
    //for (int i = 0; i < 4; i++)
    //{
    //    printf("%i\n", list[i]);
    //}
    //// これはなくても実行できるが、valgrindではエラーになっている
    //// ちなみにlist = tmpのところでlistはtmpと同じアドレスを設定しているのでlistを開放するだけで実質tmpも開放したことになる
    //free(list);
    //return 0;

    //reallocで配列のサイズを変更する
    //厳密には↑でやった新しい配列を作って、そこに古い配列の値をコピーするということをやっている
    int *tmp = realloc(list, 4 * sizeof(int));
    if (tmp == NULL)
    {
        free(list);
        return 1;
    }

    tmp[3] = 4;

    list = tmp;

    for (int i = 0; i < 4; i++)
    {
        printf("%i\n", list[i]);
    }
    free(list);
    return 0;
}
#include <stdio.h>
#include <cs50.h>

int main(int argc, string argv[])
{
    if (argc != 2)
    {
        printf("Missing command-line argument\n");
        // 終了コード。正常の時は0。異常の値はいろいろあるけど、1もエラー。
        // mainから0以外の値を返すことでプラグラムを終了させることができる。
        return 1;
    }
    printf("hello, %s\n", argv[1]);
    // デフォルトではmainは自動的に0を返す。なので戻り値はintになっている。
    return 0;

}
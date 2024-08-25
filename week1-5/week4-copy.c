#include <cs50.h>
#include <ctype.h>
#include <stdio.h>
#include <string.h>
#include <stdlib.h>

int main(void)
{
    //string s = get_string("s: ");
    //string t = s;
    //t[0] = toupper(t[0]);
//
    //// toupperで大文字にしたのはtだが、tとsは指しているアドレス自体は同じなのでsも大文字になる
    //printf("s: %s\n", s);
    //printf("t: %s\n", t);

    char *s = get_string("s: ");
    // malloc
    // メモリ割り当て。数値を入力してOSに何バイトのメモリを見つけてほしいかを指定する。
    // それを見つけて連続したメモリの最初のバイトのアドレスを返す。
    //
    // free
    // mallocが与えてくれたメモリの塊を使い終わったら開放する
    char *t = malloc(strlen(s) + 1);

    //十分なメモリがない等の理由でmallocが失敗したときのためのエラーハンドリング
    if (t = NULL)
    {
        return 1;
    }

    //空のtにsの値をコピーする
    // t = sにした場合は最初と同じでsも大文字になる
    strcpy(t, s);

    // sに何も入力されていない場合を考慮して。
    // tの長さが少なくとも0より大きい場合に限ってtの最初の文字を大文字にすべき。
    if (strlen(t) > 0)
    {
        t[0] = toupper(t[0]);
    }

    printf("s: %s\n", s);
    printf("t: %s\n", t);

    // sは開放する必要もないしすべきでもない。
    // cs50ライブラリで管理されているいるから。get_stringは使い終わったら自動で掴んでいたメモリを開放する。
    free(t);
}
#include <cs50.h>
#include <stdio.h>

int main(void)
{
    //string s = "HI!";
    //printf("%s\n", s);

    //// これも同じ結果
    //// stringという文字列はC言語にはなく、cs50のライブラリで、連続する文字列の最初の文字のアドレスを指している。
    //// 文字列の終端はヌルなのでそれが目印となって最初から最後がわかる。
    //// その為、ポインタを指定すればchar型でもstringの変数と同じ結果になる
    //char *s = "HI!";
    //printf("%s\n", s);

    //string s = "HI!";
    //char c = s[0];
    //char *p = &c;
    //// cはsのコピーなのでポインタ自体は異なる
    //printf("%p\n", s);
    //printf("%p\n", p);

    //string s = "HI!";
    //char *p = &s[0];
    //// これは実体がsで同じなので同じ値になる
    //printf("%p\n", p);
    //printf("%p\n", p);

    //// 一つ目と２つ目は同じで、それ以降は1ずつずれる
    //char *s = "HI!";
    //printf("%p\n", s);
    //printf("%p\n", &s[0]);
    //printf("%p\n", &s[1]);
    //printf("%p\n", &s[2]);
    //printf("%p\n", &s[3]);

    //string s = "HI!";
    //printf("%c\n", s[0]);
    //printf("%c\n", s[1]);
    //printf("%c\n", s[2]);
    //// これでNULLも含まれる
    //printf("%c\n", s[3]);

    //char *s = "HI!";
    //printf("%c\n", s[0]);
    //printf("%c\n", s[1]);
    //printf("%c\n", s[2]);
    //printf("%c\n", s[3]);

    char *s = "HI!";
    // これは文字列の最初のアドレスを指すので、以降の処理はその後に続くアドレスの値が表示される
    printf("%c\n", *s);
    printf("%c\n", *(s + 1));
    printf("%c\n", *(s + 2));
}
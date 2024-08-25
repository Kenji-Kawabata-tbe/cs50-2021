#include <cs50.h>
#include <stdio.h>
#include <string.h>
#include <ctype.h>

int main(void)
{
    string s = get_string("Before: ");
    printf("After:  ");
    for (int i = 0, n = strlen(s); i < n; i++)
    {
        // 配列の現在の位置であるs[i]が小文字のa以上でありz以下であれば。asciiの番号を比較している。
        //if (s[i] >= 'a' && s[i] <= 'z')

        // islowerは文字が小文字の場合、0以外の値を返す
        if (islower(s[i]))
        {
            // s[i]がアルファベットの小文字であれば大文字に変換している。アルファベットの小文字の場合、ascii番号から32を引けば大文字のそれになる
            //printf("%c", s[i] - 32);
            // toupperは小文字を大文字に変換してくれる。大文字や句読点の場合はそのままその値を返す
            printf("%c", toupper(s[i]));

        }
        else
        {
            printf("%c", s[i]);
        }
    }
}
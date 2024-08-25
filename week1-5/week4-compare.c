#include <cs50.h>
#include <stdio.h>
#include <string.h>

int main(void)
{
    //int i = get_int("i: ");
    //int j = get_int("j: ");
//
    //if (i == j)
    //{
    //    printf("Same\n");
    //}
    //else
    //{
    //    printf("Different\n");
    //}

    //// この場合、同じ値を入力してもSameにはならない、
    //// stringはポインタだから。sとtのアドレスは異なる。
    //string s = get_string("s: ");
    //string t = get_string("t: ");
//
    //if (s == t)
    //{
    //    printf("Same\n");
    //}
    //else
    //{
    //    printf("Different\n");
    //}

    //// これは同じ
    //string s = get_string("s: ");
    //string t = get_string("t: ");
//
    //if (strcmp(s, t) == 0)
    //{
    //    printf("Same\n");
    //}
    //else
    //{
    //    printf("Different\n");
    //}

    char *s = get_string("s: ");
    char *t = get_string("t: ");

    printf("%s\n", s);
    printf("%s\n", t);
    printf("%p\n", s);
    printf("%p\n", t);
}

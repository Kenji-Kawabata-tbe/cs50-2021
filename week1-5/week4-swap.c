#include <stdio.h>

void swap (int *a, int *b);

int main(void)
{
    int x = 1;
    int y = 2;

    printf("x is %i, y is %i\n", x, y);
    swap(&x, &y);
    printf("x is %i, y is %i\n", x, y);
}

//// これはaとbの値を変更しているだけでmainのxとyにはなんのアクションもしていないのでxとyの値は入れ替わらない
//void swap (int a, int b)
//{
//    int tmp = a;
//    a = b;
//    b = tmp;
//}

void swap (int *a, int *b)
{
    int tmp = *a;
    *a = *b;
    *b = tmp;
}
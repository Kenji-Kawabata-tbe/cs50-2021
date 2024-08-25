#include <cs50.h>
#include <stdio.h>
#include <math.h>

int main(void)
{
    float amount = get_float("Dollar amount: ");
    // これだと4.20が419になる
    // calculator.cと同じで浮動小数点数の扱いの精度に問題がある。
    // 多くのプログラミング言語で浮動小数点数（この場合はfloat型）は数値を二進数で表現します。
    // しかし、4.20のような10進数の小数を二進数で正確に表すことができない数値があります。
    // そのため、実際にメモリに格納される値は4.20という値に非常に近いですが(4.199999...みたいな)完全には等しくない値になります。
    //int pennies = amount * 100;

    // roundは四捨五入。浮動小数点数を整数に変換する際の一般的な解決策の一つ。
    int pennies = round(amount * 100);
    printf("Pennies: %i\n", pennies);
}
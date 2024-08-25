#include <cs50.h>
#include <stdio.h>

// discountのプロトタイプを最初に宣言しておけば、コンパイル時にmainはすでに
// discountという単語を見たことになる。
float discount(float price, int percentage);

int main(void)
{
    float regular = get_float("Regular Price: ");
    //float sale = regular * .85;
    int percent_off = get_int("Percent Off: ");
    float sale = discount(regular, percent_off);
    // 小数点第2まで
    printf("Sale Price: %.2f\n", sale);
}

// floatを引数に受け取る。中ではpriceとして扱う
float discount(float price, int percentage)
{
    return price * (100 - percentage) / 100;
}

#include <cs50.h>
#include <stdio.h>

int main(void)
{
    //// Prompt user for x
    //long x = get_int("x: ");
    //// Prompt user for x
    //long y = get_int("y: ");
    //// Perform addition
    //printf("%li\n", x + y);

    //// Prompt user for x
    //float x = get_float("x: ");
    //// Prompt user for x
    //float y = get_float("y: ");
    //// Divide x by y
    //float z = x / y;
    //// Perform addition
    //printf("%f\n", z);
    //printf("%.2f\n", z);
    //// オーバーフロー
    //// 例えば2進数で8を表現する場合1000だが、3ビットまでしか表現できないと000になり0となっていまう。
    ////    (余談)
    ////    コンピュータは1970年1月1日からの秒数を数えることによって時間を記録している。
    ////    この時、多くのコンピュータは32ビットだったのでおよそ20億秒までしか数えられない。
    ////    32ビットの一番左(最初のビット)が1になるとそれは負の数を意味するので約20億が最大値
    ////    その結果2038年1月19日に1970年1月1日からマイナス20億秒経った1901年だと思い込む可能性がある
    ////    解決策はビットの上限を増やすこと。今は64ビットが主流。昔はハードウェアの値段も下がり性能もよくなったので昔よりは容易。
    //// この場合、浮動小数点数の不正確性。
    //// C言語などのデフォルトではコンピュータがすべての可能な実数を100%正確に表現できない
    //// xとyをintにしてそれぞれ2,3とした場合、zは0.00000になる。
    //// 浮動小数点演算の結果を整数に格納しようとすると小数点以下を切り捨てるので0.666〜が0となる
    //// 同じようにxとyを4,3にした場合1.0000となる
    //printf("%.50f\n", z);


    // これで丸め込みは解消されるけど、浮動小数点数の不正確性は解決していない
    // Prompt user for x
    int x = get_float("x: ");
    // Prompt user for x
    int y = get_float("y: ");
    // Divide x by y
    // xとyを型変換(キャスト)すれば問題を解決できる
    float z = (float) x / (float) y;
    // Perform addition
    printf("%f\n", z);
    printf("%.2f\n", z);
    printf("%.50f\n", z);

}
// printfなどの標準入出力用のライブラリ
#include <stdio.h>
// get_stringを使うためのライブラリ
#include <cs50.h>

int main(void)
{
    int points = get_int("How many points did you lose?");

    // 2がマジックナンバーになっている。手動で2を2箇所に入力している。
    //if (points < 2)
    //{
    //    printf("You lost fewer points than me.\n");
    //}
    //else if (points > 2)
    //{
    //    printf("You lost more points than me.\n");
    //}
    //else
    //{
    //    printf("You lost the same number of points as me.\n");
    //}

    // intだけでもいいけど、後で変更しない場合はconstで定数にしたほうがより安全
    //int mine = 2;
    const int MINE = 2;
    if (points < MINE)
    {
        printf("You lost fewer points than me.\n");
    }
    else if (points > MINE)
    {
        printf("You lost more points than me.\n");
    }
    else
    {
        printf("You lost the same number of points as me.\n");
    }

}
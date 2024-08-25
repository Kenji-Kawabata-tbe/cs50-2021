#include <cs50.h>
#include <stdio.h>
#include <string.h>

// personという構造体
// nameとnumberという情報をカプセル化(関連する情報の断片をまとめる)をしている
typedef struct
{
    string name;
    string number;
}
person;


int main(void)
{
    // これだけでは不完全。
    // names配列とnumbers配列の数が一致していなかったら？
    // names[i]とnumbers[i]が対応しているという事が前提になってしまっている
    //string names[] = {"Carter", "David"};
    //string numbers[] = {"+1-617-495-1000", "+1-949-468-2750"};

    person people[2];

    people[0].name = "Carter";
    people[0].number = "+1-617-495-1000";
    people[0].name = "David";
    people[0].number = "+1-949-468-2750";

    for (int i = 0; i < 2; i++)
    {
        if (strcmp(people[i].name, "David") == 0)
        {
            printf("found %s\n", people[i].number);
            return 0;
        }
    }
    printf("Not found\n");
    return 1;

}
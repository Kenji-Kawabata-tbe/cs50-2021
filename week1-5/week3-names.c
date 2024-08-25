#include <cs50.h>
#include <stdio.h>
#include <string.h>

int main(void)
{
    // 線形探索(文字列)
    string names[] = {"Bill", "Charlie", "Fred", "George", "Ginny", "Percy", "Ron"};

    for (int i = 0; i < 7; i++)
    {
        // 文字列のデータ型は存在しないのでこれはエラーになる
        //if (names[i] == "Ron")
        if (strcmp(names[i], "Ron") == 0)
        {
            printf("Found\n");
            return 0;
        }
    }
    printf("Not found\n");
    return 1;
}
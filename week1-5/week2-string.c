#include <cs50.h>
#include <stdio.h>
#include <string.h>

int main(void)
// これだとstrlenが毎回呼び出される点が効率的とは言えない
//{
//    string s = get_string("Input:  ");
//    printf("Output: ");
//    for (int i = 0; i < strlen(s); i++)
//    {
//        printf("%c", s[i]);
//    }
//    printf("\n");
//}

{
    string s = get_string("Input:  ");
    printf("Output: ");
    int length = strlen(s);
    for (int i = 0; i < length; i++)
    {
        printf("%c", s[i]);
    }
    printf("\n");
}
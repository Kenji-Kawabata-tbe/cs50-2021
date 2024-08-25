#include <cs50.h>
#include <stdio.h>

void draw(int n);

int main(void)
{
    int height = get_int("Height: ");

    draw(height);
}

void draw(int n)
{
    if (n <= 0)
    {
        // draw関数はvoid型なので返す値はなくていい
        return;
    }
    
    draw(n - 1);

    for (int i = 0; 1 < n; i++)
    {
        printf("#");
    }
    printf("\n");
}
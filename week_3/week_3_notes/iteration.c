#include <stdio.h>
#include <cs50.h>

void draw(int n);

int main(void)
{
    int height = get_int("Height: ");
    draw(height);
}

void draw(int n)
{
    // For rach row of pyramid
    for (int i = 0; i < n; i++)
    {
        // For each column of pyramid
        for (int j = 0; j < i + 1; j++)
        {
            printf("#");
        }
        printf("\n")
    }
}

// ----------------------------------------------

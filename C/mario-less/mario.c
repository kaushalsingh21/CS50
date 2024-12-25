#include <stdio.h> // this is called a preprocessor directive

void pattern(int spaces, int bricks); // this is called a prototype"
int main(void)
{
    int height;

    do
    {
        printf("Height: ");
        scanf("%d", &height);
    } while ( height < 1 || height > 8 );

    for (int i=0; i < height; i++)
    {
        int spaces = height - i;
        pattern(spaces, i);

        printf("\n");
    }
    
}

void pattern(int spaces, int bricks)
{
    for (int i=0; i<spaces; i++)
    {
        printf(" ");
    }
    for (int i=0; i<=bricks; i++ )
    {
        printf("#");
    }
    // printf("  ");
    // for (int i=0; i<=bricks; i++ )
    // {
    //     printf("#");
    // }
}
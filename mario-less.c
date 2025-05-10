#include <cs50.h>
#include <stdio.h>


void print_row(int height, int space, int row);


int main(void)
{
    int height;
    do
    {
        height = get_int("Height: "); // prompt user for pyramid's height
    }
    while (height < 1); // do-while loop: do block runs at least once, and
                        // then the condition in the
                        // while statement is checked. If the condition is
                        // true, the loop runs
                        // again; if it’s false, the loop stops.


    for (int i = 0; i < height; i++) // print a pyramid of that height
    {
        print_row(height, i, i + 1); // print the row of rows
    }
}


void print_row(int height, int space, int row)
{
    for (int i = height - 1; i > space; i--)
    {
        printf(" ");
    }


    for (int j = 0; j < row; j++)
    {
        printf("#");
    }
    printf("\n");
}




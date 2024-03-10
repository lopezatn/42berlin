// #include <stdio.h>
// #include "rush.h"
#include "ft_putchar.h"

void rush(int x, int y)
{
    int index_x;
    int index_y;

    index_y = 1;
    while(index_y <= y)
    {
        index_x = 1;
        while(index_x <= x)
        {
            if((index_x == 1 && index_y == 1) || (index_x == x && index_y == y)) 
            {
                ft_putchar('/');
            }
            else if((index_x != 1 && index_x != x && index_y == y) || (index_x != 1 && index_x != x && index_y == 1) || (index_x == 1 && index_y != y && index_y != 1) || (index_x == x && index_y != 1 && index_y != y)) 
            {
                ft_putchar('*');
            }
            else if((index_x == x && index_y == 1) || (index_x == 1 && index_y == y)) 
            {
                ft_putchar('\\');
            } else 
            {
                ft_putchar(' ');
            }
            index_x++;
        }
        ft_putchar('\n');
        index_y++;
    }
}

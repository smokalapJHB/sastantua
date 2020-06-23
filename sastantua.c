/*
Sastantua

Create a function that displays Sastantua’s pyramid onscreen. Its size will be passed
as argument. A pyramid of size 0 displays nothing.

Allowed functions : ft_putchar
*/


#include <unistd.h>

int ft_putchar(char c);

int calc_base(int size)
{
    int floor;
    int width;
    int floor_step;

    floor = 1;
    width = 1;
    floor_step = 4;
    while (floor <= size)
    {
        width += 2*(2+floor);
        floor++;
        width += floor_step;
        if(floor % 2 && floor < size) 
    }

    width -= floor_step;
    return (width);
}

void put_line(int space)
{
    int position;

    position = 0;
    while (position < space)
    {
        ft_putchar(' ');
        position++;
    }   
}

void put_blocks(int floor, int width, int size, int step)
{
    int position;
    int gap;

    gap = 1 + 2 * ((floor-1)/2);
    position = 0;
    while (position < width)
    {
        if(position == 0)
            ft_putchar('/');
        else 
        if(position==width-1)
            ft_putchar('\\');
        else
        {
            if (floor == size && position >= (width-door)/2 && position < (width+gap)/2 && 2+floor - step <= gap)
                if (gap >= 5 && step == 2+floor - gap/2 - 1 && position == (width+gap)/2 - 2)
                    ft_putchar('$');
                else
                    ft_putchar('|');
            else
                ft_putchar('*');
        }   
        position++;
    }
}

void sastantua(int size)
{
    int floor;
    int height;
    int step;
    int width;

    floor = 1;
    width = 1;

    if(size<1)
        return;
    
    while (floor <= size)
    {
        height = 2 + floor;
        step = 0;
        
        while(step<height)
        {
            width += 2;
            put_line((calc_base(size) - width) /2);
            put_blocks(size, floor, width, step);
            ft_putchar('\n');
            step++;
        }
        floor++;
        width += 4+2 * ((floor-2)/2);
    }
    
}

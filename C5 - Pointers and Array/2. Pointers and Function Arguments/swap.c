#include <stdio.h>

int main()
{
    swap(1, 2);
}

void swap(int *x, int *y)
{
    *x = *y;
    *y = *x;
    printf("%d, %d\n", x, y);
}
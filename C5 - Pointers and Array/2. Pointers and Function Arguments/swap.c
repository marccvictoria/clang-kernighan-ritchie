#include <stdio.h>

void swap(int *x, int *y)
{
    int temp = *x;
    *x = *y;
    *y = temp;
    printf("%d, %d\n", *x, *y);
}

int main()
{
    int a = 1, b = 2;
    printf("%d, %d\n", a, b);
    swap(&a, &b);
    printf("%d, %d\n", a, b); // the value is changed even in main() since pointers change addresses permanently
}
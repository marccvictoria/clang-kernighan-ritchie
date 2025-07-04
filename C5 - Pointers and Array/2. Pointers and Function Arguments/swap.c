#include <stdio.h>

void swap(int *x, int *y) // int *x = &a | int pointer named x is set to address of a
//      x = 0x100 y = 0x104
{
    int temp = *x; // int named temp is set to address of x
    *x = *y;       // address of x is set to  value of address y
    *y = temp;     // address of y is set to value of temp (that is, address of x)
    printf("%d, %d\n", *x, *y);
}

int main()
{
    int a = 1, b = 2;
    printf("%d, %d\n", a, b);
    swap(&a, &b);
    printf("%d, %d\n", a, b); // the value is changed even in main() since pointers change addresses permanently
}
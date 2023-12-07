#include <stdio.h>

void penjumlahan(int a, int b, int *sum);

int main()
{
    int a = 10;
    int b = 5;
    int *sum;

    penjumlahan(a, b, sum);
    printf("%d", *sum);
}

void penjumlahan(int a, int b, int *sum)
{
    *sum = (a + b);
}
#include <stdio.h>

void binary_print(unsigned x)
{
    printf("bitwise print\n");
    for (int i = sizeof(x) * 8 - 1; i >= 0; --i)
    {
        printf("%i", x & (1 << i) ? 1 : 0);
    }
    printf("\n");
}

int main()
{
    unsigned n, j;
    printf("n = ");
    scanf("%u", &n);

    binary_print(n);

    printf("j = ");
    scanf("%u", &j);

    n &= ~(1 << j);

    binary_print(n);

    printf("n = %i\n", n);
    printf("n = %x\n", n);
}
#include <stdio.h>

void binary_print(unsigned x)
{
    printf("bitwise print:\ndec %i\noct %o\nhex %x\nbinary ", x, x, x);
    for (int i = sizeof(x) * 8 - 1; i >= 0; --i)
    {
        printf("%i", x & (1 << i) ? 1 : 0);
    }
    printf("\n");
}

int main()
{
    unsigned i;
    printf("i = ");
    scanf("%u", &i);
    binary_print(i);
    binary_print(~i);
}
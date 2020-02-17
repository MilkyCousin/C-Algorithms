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
    unsigned i, t, j;
    printf("i = ");
    scanf("%u", &i);

    printf("j = ");
    scanf("%u", &j);

    printf("t = ");
    scanf("%u", &t);

    binary_print(i);

    unsigned o = (i & (1 << j) ? 1 : 0), l = (i & (1 << t) ? 1 : 0);
    i |= (o << t);
    i |= (l << j);

    binary_print(i);
}
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
    unsigned i, j, u, v, c=0;
    printf("i = ");
    scanf("%u", &i);
    printf("j = ");
    scanf("%u", &j);
    binary_print(i);
    binary_print(j);
    binary_print(u = i&j);
    binary_print(v = i^j);
    for(int k=0; k<(sizeof(u) * 8 - 1); k++) if(u & (1 << k)) c++;
    printf("union full bits count: %u\n", c);
    c = 0;
    for(int k=0; k<(sizeof(v) * 8 - 1); k++) if(u & ~(1 << k)) c++;
    printf("same bits count: %u\n", c);
}
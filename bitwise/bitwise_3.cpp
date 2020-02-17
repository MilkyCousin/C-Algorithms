#include <stdio.h>

void binary_print(unsigned x)
{
    printf("bitwise print %i\n", x);
    for (int i = sizeof(x) * 8 - 1; i >= 0; --i)
    {
        printf("%i", x & (1 << i) ? 1 : 0);
    }
    printf("\n");
}

int main()
{
    unsigned i, o1, o2;
    printf("i = ");
    scanf("%u", &i);
    o1 = o2 = i;
    binary_print(i);
    o1 <<= (sizeof(o1) * 8 - 9);
    o2 >>= (sizeof(o2) * 8 - 9);
    binary_print(o1);
    binary_print(o2);
    unsigned o = i;
    o |= o1;
    for(int j=0; j<8; j++) o &= ~(1 << j);
    o |= o2;
    binary_print(o);
}
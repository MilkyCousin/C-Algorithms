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
    unsigned n;
    printf("n = ");
    unsigned a=1;
    scanf("%u", &n);
    unsigned cnt=0;
    while(!(n&a))
    {
        a <<= 1;
        cnt++;
    }
    binary_print(n);
    binary_print(n&a);
    printf("right: %lu\n", (sizeof(n) * 8 - 1) - cnt);
    cnt = 0;
    a = (1 << (sizeof(n) * 8 - 1));
    while(!(n&a))
    {
        a >>= 1;
        cnt++;
    }
    printf("left: %u\n", cnt);
}
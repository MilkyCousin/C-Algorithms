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
    unsigned i, t, j;
    printf("i = ");
    scanf("%u", &i);

    printf("j = ");
    scanf("%u", &j);

    unsigned v = i;

    binary_print(v);

    printf("first\n");

    for(int k=0; k<=j; k++)
    {
        if(k == j)
        {
            binary_print(v);
            printf("%o\n", v);
        }
        else v &= ~(1 << k);
    }

    v = i;

    printf("second\n");

    printf("size %lu\nk %i\n", sizeof(i) * 8 - 1, j+1);

    for(int k=j+1; k<=(sizeof(i) * 8 - 1); k++)
    {
        if(k == (sizeof(i) * 8 - 1))
        {
            binary_print(v);
            printf("%o\n", v);
        }
        else v &= ~(1 << k);
    }
}
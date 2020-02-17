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
    unsigned i, j=-1, k=2;
    printf("i = ");
    scanf("%u", &i);
    // С циклом. Позже сделать без него, здесь без единицы
    while(i^k)
    {
        if(i <= k) break;
        j++;
        k <<= j;
    }
    if(!(i^k) || i==1) printf("true\n");
    else printf("false\n");
}
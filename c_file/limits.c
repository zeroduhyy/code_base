#include <stdio.h>
#include <limits.h>

int main()
{
    long long a, b;
    scanf("%lld%lld", &a, &b);
    if (b > 0 && a > LLONG_MAX - b)
        printf("PO!\n");
    else if (b < 0 && a < LLONG_MIN - b)
        printf("NO!\n");
    else
        printf("%lld\n", a + b);
    return 0;
}

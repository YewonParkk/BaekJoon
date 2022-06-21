#include<stdio.h>

int main(void)
{
    int a, b, c, bpt, cnt = 0;

    scanf("%d %d %d",&a, &b, &c);
    bpt = c - b;

    if (bpt <= 0)
    {
        printf("-1");
        return (0);
    }
    cnt = (a/bpt) + 1;
    printf("%d", cnt);
    return (0);
}
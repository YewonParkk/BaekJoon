#include <stdio.h>
int main(void)
{
    char str[21];
    int t, r, i;

    scanf ("%d", &t);

    while (t--)
    {
        scanf ("%d", &r);
        scanf ("%s", str);

        i = -1;
        while (str[++i])
            for (int j = 0; j < r; j++)
                printf("%c", str[i]);
        printf("\n");
    }
    return (0);
}
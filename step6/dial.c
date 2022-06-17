#include <stdio.h>
int change(char c)
{
    if (c == ' ' || c == '1')
        return (2);
    if (c >= 'A' && c <= 'C')
        return (3);
    if (c >= 'D' && c <= 'F')
        return (4);
    if (c >= 'G' && c <= 'I')
        return (5);
    if (c >= 'J' && c <= 'L')
        return (6);
    if (c >= 'M' && c <= 'O')
        return (7);
    if (c >= 'P' && c <= 'S')
        return (8);
    if (c >= 'T' && c <= 'V')
        return (9);
    if (c >= 'W' && c <= 'Z')
        return (10);
    if (c == '0')
        return (11);
    return (0);
}

int main(void)
{
    char arr[15];
    int i = -1;
    int sum = 0;
    scanf("%s", arr);

    while (arr[++i])
    {
        sum += change(arr[i]);
    }
    printf("%d",sum);
    return (0);
}
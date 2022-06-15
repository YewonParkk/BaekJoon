#include <stdio.h>
int main(void)
{
    char str[1000000];
    int i, cnt;

    scanf("%[^\n]s",str);
    i = 0;
    cnt = 0;
    while (str[i] == ' ')
        i++;
    if(!str[i])
    {
        printf("%d",cnt);
        return (0);
    }
    while(str[i])
    {
        if (str[i] == ' ' && str[i+1] != '\0')
            cnt++;
        i++;
    }
    printf("%d",cnt + 1);
    return (0);
}
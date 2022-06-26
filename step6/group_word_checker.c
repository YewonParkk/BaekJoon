#include<stdio.h>
#include<string.h>

int check(char str[])
{
    char ck[100] = {0};
    char pick;
    int cnt = -1;

    if (strlen(str) == 1)
        return (1);

    for (int i = 0; i < strlen(str); i++)
    {
        pick = str[i];
        ck[++cnt] = pick;
        int j = i-1;
        while (str[i] == str[++j]);
        i = j-1;
    }

    for(int i = 0; i < strlen(ck) - 1; i++)
    {
        for(int j = i+1; j < strlen(ck); j++)
            if (ck[i] == ck[j])
                return (0);
    }
    return (1);
}

int main(void)
{
    int num = 0, sum = 0;
    char str[100][100]= {0};
    scanf("%d", &num);
    for(int i = 0; i < num; i++)
    {
        scanf("%s",str[i]);
        sum += check(str[i]);
    }
    printf("%d",sum);
    return (0);
}
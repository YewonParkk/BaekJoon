#include<stdio.h>
#include<string.h>

int check(char str[])
{
    int cnt = 0;
    char croatia[8][4] = {"c=", "c-", "dz=", "d-", "lj", "nj", "s=", "z="};

    for (unsigned int i = 0; i < strlen(str); i++)
    {
        if(str[i] == 'c' || str[i] == 'd' || str[i] == 's' || str[i] == 'z')
            if(str[i+1] == '=' || str[i+1] == '-')
                i++;
        if (str[i] == 'd' && str[i+1] == 'z' && str[i+2] == '=')
            i += 2;
        if (str[i] == 'l' || str[i] == 'n')
            if(str[i+1] == 'j')
                i++;
        cnt++;
    }
    return (cnt);
}
int main(void)
{
    char str[100];

    scanf("%s",str);
    printf("%d",check(str));
    return (0);
}
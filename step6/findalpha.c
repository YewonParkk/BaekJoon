#include <stdio.h>
int main(void)
{
    char s[100] = {0};
    char alpha[] = "abcdefghijklmnopqrstuvwxyz";
    int arr[26];
    int i;

    for(i = 0; i < 26; i++)
        arr[i] = -1;
    i = -1;
    scanf("%s", s);
    while (s[++i] != '\0')
    {
        for (int j = 0; j < 26; j++)
            if (arr[j] == -1 && alpha[j] == s[i])
                arr[j] = i;
    }
    for (i = 0; i < 26; i++)
        printf("%d ", arr[i]);
    printf("\n");
    return (0);
}
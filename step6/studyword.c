#include <stdio.h>
int main(void)
{
    char word[1000000];
    int arr[26] = {0,};
    int i;
    int max = 0;
    int cnt = 0;

    scanf("%s", word);
    i = -1;
    while (word[++i])
    {
        if ('a' <= word[i] && 'z' >= word[i])
            arr[word[i] - 'a']++;
        else if ('A' <= word[i] && 'Z' >= word[i])
            arr[word[i] - 'A']++;
    }
    for (int j = 0; j < 26; j++)
        if (max < arr[j])
            max = arr[j];
    for (i = 0; i < 26; i++)
        if (arr[i] == max)
            cnt++;
    if (cnt != 1)
    {
        printf("?");
        return (0);
    }
    for (i = 0; i < 26; i++)
    {
        if (arr[i] == max)
        {
            printf("%c", i + 'A');
            break;
        }
    }
    return (0);
}
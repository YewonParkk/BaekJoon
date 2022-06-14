#include <stdio.h>
int main(void)
{
    int num;
    char input[101] = {0};
    int sum;

    sum = 0;
    scanf("%d", &num);
    scanf("%s", input);
    for (int i = 0; i < num; i++)
        sum += (input[i] - '0');
    printf("%d", sum);
    return (0);
}
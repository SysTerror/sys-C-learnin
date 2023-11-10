#include <stdio.h>
int main()
{
    int i, n;
    printf("键入你想印出线条的长度：");
    scanf("%d", &n);
    for (i = 0; i < n; i++)
    {
        printf("*");
    }
    return 0;
}
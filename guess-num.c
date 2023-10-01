#include <stdio.h>
int main()
{
    int ans = 92;
    int guess;
    while (1)
    {
        printf("键入你猜测的数字：");
        scanf("%d", &guess);
        if (guess == ans)
        {
            printf("你猜对了！\n");
            break;
        }
        if (guess > ans)
        {
            printf("太大！\n");
        }
        if (guess < ans)
        {
            printf("太小！\n");
        }
    }
    return 0;
}
#include <stdio.h>
int main()
{ 
    int ans = 92;
    int guess;
    int count = 0;
    while (count == 0 || guess != ans)
    {
        printf("键入你猜测的数字：");
        scanf("%d", &guess);
        count = count + 1;
        if (guess > ans)
        {
            printf("太大！\n");
        }
        else if (guess < ans)
        {
            printf("太小！\n");
        }
    }
    printf("猜得分毫不差！(%d 次)", count);
    return 0;
}

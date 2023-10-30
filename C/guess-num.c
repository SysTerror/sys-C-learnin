#include <stdio.h>
int main()
{ 
    int ans = 92;
    int guess;
    int count = 0;
    while (count == 0 || guess != ans)
    {
        if (guess > ans)
        {
            printf("太大！\n");
        }
        else
        {
            printf("太小！\n");
        }
        printf("键入你猜测的数字：");
        scanf("%d", &guess);
        count = count + 1;
    }
    printf("猜得分毫不差！(%d 次)", count);
    return 0;
}

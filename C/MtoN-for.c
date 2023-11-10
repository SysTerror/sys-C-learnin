#include <stdio.h>
int main()
{
    int i, M, N;
    printf("键入你想印出的 M 正数到 N 的 M：");
    scanf("%d", &M);
    printf("现在键入 M 正数到 N 的 N：");
    scanf("%d", &N);
    for (i = M; i <= N; i++)
    {
        printf("%d\n", i);
    }
    return 0;
}
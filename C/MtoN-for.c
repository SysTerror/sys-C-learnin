#include <stdio.h>
int main()
{
    int count, M, N;
    printf("键入你想印出的 M 正数到 N 的 M：");
    scanf("%d", &M);
    printf("现在键入 M 正数到 N 的 N：");
    scanf("%d", &N);
    for (count = M; count <= N; count++)
    {
        printf("%d\n", count);
    }
    return 0;
}
#include <stdio.h>
int main()
{
    // 印出 1 到 9 的奇数
    int count;
    /* 方法 1：使用朴素的 *2-1 算法
    for (count = 1; count <= 5; count++)
    {
        count = count * 2 - 1;
        printf("%d\n", count);
    }*/
    /* 方法 2：使用不那么朴素但也精致不到哪儿去的 n+2 算法
    for (count = 1; count <= 9; count += 2)
    {
        printf("%d\n", count);
    }*/
    // 方法 3：使用 if 述句判断奇偶
    // 老师说，这种方法“最有弹性”
    for (count = 1; count <= 10; count++)
    {
        if (count % 2 == 1)
        {
            printf("%d\n", count);
        }
    }
    // 再印出 2 到 10 的偶数
    for (count = 1; count <= 10; count++)
    {
        if (count % 2 == 0)
        {
            printf("%d\n", count);
        }
    }
    return 0;
}
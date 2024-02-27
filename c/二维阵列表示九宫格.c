#include <stdio.h>
int main () {
    /* int v[3][3] = { // 定义一个 3x3 的二维阵列
        {1, 2, 3},
        {4, 5, 6},
        {7, 8, 9}
    }; */
    // 更好的定义方法·使用 for 语句
    int v[3][3], i, j;
    for (i = 0; i < 3; i++) {
        for (j = 0; j < 3; j++) {
            v[i][j] = i * 3 + (j + 1); // 根据值和索引对应关系推估公式，或者也可使用自增变量 k 依序赋值
        }
    }

    for (i = 0; i < 3; i++) { // 横行
        for (j = 0; j < 3; j++) { // 纵列
            printf("%d ", v[i][j]);
        }
        printf("\n");
    }
    return 0;
}
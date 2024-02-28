#include <stdio.h>

void selfAdd (int *nAddr) { // 使传入地址的变数值自增 1
    *nAddr = *nAddr + 1; // * 间接运算子，透过位址找到对应变数
}

int main () {
    int n = 9;
    selfAdd(&n); // & 取址运算子
    printf("%d", n);
    return 0;
}
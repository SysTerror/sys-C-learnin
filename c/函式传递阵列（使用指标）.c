#include <stdio.h>

void vPrint (int *, int); // 循序打印传入阵列元素

int main () {
    int v[5] = {9, 2, 6, 1, 3};
    vPrint(v, 5); // 隐性转型：v -> &v[0]
    
    return 0;
}

void vPrint (int *v, int N) {
    for (int i = 0; i < N; i++) {
        printf("%d, ", *(v+i));
    }
}
#include <stdio.h>
int main () {
    int v[9], i;
    for (i = 0; i < 9; i++) {
        v[i] = i + 1;
    }

    for (i = 0; i < 9; i++) {
        printf("%d ", v[i]);
        if (i % 3 == 2) { // 需求：i 为 2，5，8 时换行；要判断之，只需 i 除以 3 余 2
            printf("\n");
        }
    }
    return 0;
}
#include <stdio.h>
int main () {
    int v[9], i;
    for (i = 0; i < 9; i++) {
        v[i] = i + 1;
    }v

    for (i = 0; i < 9; i++) {
        printf("%d ", v[i]);
    }
    return 0;
}
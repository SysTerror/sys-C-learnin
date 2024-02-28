#include <stdio.h>

int main () {
    int v[5];
    int *p;
    for (p = v; p != &v[5]; p++) { // &v[5] == v+5
        *p = 0;
    }
    return 0;
}

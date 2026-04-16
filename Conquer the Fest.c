#include <stdio.h>

int main() {
    int N, B;
    scanf("%d %d", & N, & B);

    if (N >= 10 * B) {
        printf("YES\n");
    } else {
        printf("NO\n");
    }
    return 0;
}

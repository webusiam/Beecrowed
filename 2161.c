#include <stdio.h>
int main() {
    int n;
    scanf("%d", &n);
    double ans = 0.0;
    for (int i = 0; i < n; i++) {
        ans = 1.0 / (6.0 + ans);
    }
    ans += 3.0;
    printf("%.10f\n", ans);
    return 0;
}

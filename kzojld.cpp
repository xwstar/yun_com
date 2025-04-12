#include <stdio.h>
int extended_gcd(int a, int b, int *x, int *y) {
    if (b == 0) {
        *x = 1;
        *y = 0;
        return a;
    } else {
        int x1, y1;
        int d = extended_gcd(b, a % b, &x1, &y1);
        *x = y1;
        *y = x1 - (a / b) * y1;
        return d;
    }
}

int main() {
    int a, b, x, y, d;
    printf("����������������");
    scanf("%d %d", &a, &b);
    d = extended_gcd(a, b, &x, &y);
    printf("���Լ��Ϊ��%d\n", d);
    printf("x = %d, y = %d\n", x, y);
    return 0;
}

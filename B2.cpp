#include <stdio.h>

// Hàm tính giai th?a c?a n
int P(int n) {
    if (n == 0 || n == 1) {
        return 1;
    } else {
        return n * P(n-1);
    }
}

// Hàm tính t?ng P(n)
int tong_P(int n) {
    if (n == 1) {
        return 1;
    } else {
        return P(n) + tong_P(n-1);
    }
}

int main() {
    int n;
    printf("Nhap vao mot so nguyen duong n: ");
    scanf("%d", &n);
    
    printf("Tong P(n) voi n = %d la: %d\n", n, tong_P(n));
    
    return 0;
}


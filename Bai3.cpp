#include <stdio.h>

// Hàm tìm ph?n t? nh? nh?t trong m?ng t? a[l] d?n a[r]
int minElement(int a[], int l, int r) {
    if (l == r) {
        return a[l]; // Tru?ng h?p co s?: m?ng ch? có m?t ph?n t?
    } else {
        // Tìm ph?n t? nh? nh?t trong m?ng con bên trái và bên ph?i
        int mid = (l + r) / 2;
        int minLeft = minElement(a, l, mid);
        int minRight = minElement(a, mid + 1, r);
        
        // So sánh và tr? v? ph?n t? nh? nh?t
        return (minLeft < minRight) ? minLeft : minRight;
    }
}

int main() {
    int n;
    printf("Nhap vao so luong phan tu cua mang: ");
    scanf("%d", &n);

    int a[n];
    printf("Nhap vao cac phan tu cua mang:\n");
    for (int i = 0; i < n; i++) {
        printf("a[%d] = ", i);
        scanf("%d", &a[i]);
    }
    
    int min = minElement(a, 0, n-1);
    printf("Phan tu nho nhat trong mang la: %d\n", min);
    
    return 0;
}


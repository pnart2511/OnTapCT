#include <stdio.h>

// H�m t�m ph?n t? nh? nh?t trong m?ng t? a[l] d?n a[r]
int minElement(int a[], int l, int r) {
    if (l == r) {
        return a[l]; // Tru?ng h?p co s?: m?ng ch? c� m?t ph?n t?
    } else {
        // T�m ph?n t? nh? nh?t trong m?ng con b�n tr�i v� b�n ph?i
        int mid = (l + r) / 2;
        int minLeft = minElement(a, l, mid);
        int minRight = minElement(a, mid + 1, r);
        
        // So s�nh v� tr? v? ph?n t? nh? nh?t
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


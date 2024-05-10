#include <stdio.h>

// Hàm hoán d?i giá tr? c?a hai ph?n t?
void hoanVi(int *a, int *b) {
    int temp = *a;
    *a = *b;
    *b = temp;
}

// Hàm s?p x?p m?ng theo thu?t toán Bubble Sort
void bubbleSort(int a[], int n) {
    for (int i = 0; i < n - 1; i++) {
        for (int j = n - 1; j > i; j--) {
            if (a[j] < a[j - 1]) {
                hoanVi(&a[j], &a[j - 1]);
            }
        }
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
    
    // S?p x?p m?ng
    bubbleSort(a, n);
    
    // In m?ng dã s?p x?p
    printf("Mang da sap xep tang dan la:\n");
    for (int i = 0; i < n; i++) {
        printf("%d ", a[i]);
    }
    printf("\n");

    return 0;
}


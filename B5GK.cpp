#include <stdio.h>

int main() {
    int n, i;
    
    printf("Nhap vao mot so nguyen N: ");
    scanf("%d", &n);

    if (n <= 1) {
        printf("%d khong phai la so nguyen to.\n", n);
    } else {
        for (i = 2; i < n; i++) {
            if (n % i == 0) {
                printf("%d khong phai la so nguyen to.\n", n);
                return 0;  
            }
        }
        printf("%d la so nguyen to.\n", n); 
    }

    return 0;
}


#include <stdio.h>

int main() {
    int n;

    printf("Nhap so nguyen duong: ");
    scanf("%d", &n);

    printf("Cac uoc cua %d la: ", n);
    for (int i = 1; i <= n; i++) {
        if (n % i == 0) {
            printf("%d ", i);
        }
    }

    return 0;
}
	

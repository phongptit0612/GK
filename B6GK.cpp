#include<stdio.h>
int main() {
  int temp, n, max;
  do
  {
    printf("Nhap vao so nguyen duong N: ");
    scanf("%d", &n);
    if(n <= 0)
    {
      printf("\n N phai lon hon 0, nhap lai!: ");
    }
  }while(n <= 0);
  temp = n;
  do
  {
     max = temp % 10;
  }while(temp = temp / 10);
  printf("\nSo dau tien cua %d là: %d",n, max);
return 0;
}

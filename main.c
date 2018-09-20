#include <stdio.h>

int countUnsignedNumber(int Array[], int Size) {

    int sum = 0;
    for (int i = 0; i < Size; i++) {
        if (Array[i] > 0)
            sum = sum + Array[i];
    }
    return sum;
}

int main() {
    int Size;
    printf("Nhap so luong phan tu: \n");
    scanf("%d", &Size);
    int Array[Size];
    for (int i = 0; i < Size; ++i) {
        printf("Nhap phan tu tai index %d: ", i);
        scanf("%d", &Array[i]);
    }
    int result = countUnsignedNumber(Array, Size);
    printf("Tong cac so nguyen duong la: %d", result);
    return 0;
}
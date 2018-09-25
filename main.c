#include <stdio.h>
#include <string.h>

void noiHoVaTen(char ho[], char ten[]) {
    printf("Do dai cua ho la: %d\n", strlen(ho));
    printf("Do dai cua ten la: %d\n", strlen(ten));
    int dodaiHo = strlen(ho);
    int dodaiTen = strlen(ten);
    int tong = dodaiHo + dodaiTen;
    printf("Do dai cua ca ho va ten la %d\n", tong);
    tong++;
    char hovaten[tong];
    strcat(hovaten, ho);
    strcat(hovaten, " ");
    strcat(hovaten, ten);
    printf("%s", hovaten);
}

int main() {
    char ho[20], ten[20];

    // kiểm tra độ dài họ.
    while (1 == 1) {
        printf("Vui long nhap ho cua ban: ");
        gets(ho);
        if (strlen(ho) > 20) {
            printf("Loi !!!!\n");
            printf("Ban da nhap qua gioi han ky tu. Vui long nhap lai. \n");
        } else
            break;
    }



// kiểm tra độ dài tên.
    while (1 == 1) {
        printf("Vui long nhap ten cua ban: ");
        gets(ten);
        if (strlen(ten) > 20) {
            printf("Loi !!!!\n");
            printf("Ban da nhap qua gioi han ky tu. Vui long nhap lai. \n");
        } else
            break;
    }
    printf("Ho va ten cua ban la: ");
    noiHoVaTen(ho, ten);
    return 0;
}

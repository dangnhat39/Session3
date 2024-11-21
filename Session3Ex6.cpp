#include <stdio.h>

int main() {
    float canh, chieu_cao, dien_tich;


    printf("Nhap do dai canh tam giac: ");
    scanf("%f", &canh);

    printf("Nhap do dai chieu cao tam giac: ");
    scanf("%f", &chieu_cao);


    dien_tich = (canh * chieu_cao) / 2;

   
    printf("Dien tich tam giac la: %.2f\n", dien_tich);

    return 0;
}


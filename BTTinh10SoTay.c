// Viet chuong trinh hien thi tong tien 10 cuon so tay, biet gia moi cuôn la 500 va nhan ngay 20-11 nha sach giam 20% tong tien moi don hang.

#include<stdio.h>
//Tong (S) tien 10 cuon so tay.
int main(){
    int S,N; // Khai bao bien S.
    S = (500 * 10); // Tinh tong 10 cuon so tay giá goc.
    N = S -(S* 20 / 100); //Tinh tong 10 cuon so tay sau khi giam gia 20%.
    printf("Tong tien 10 cuon so tay gia goc la: %d",S); //In ra tong 10 cuon so tay gia goc.
    printf("\nTong tien 10 cuon so tay sau khi giam 20%% la: %d", N); // In ra tong so tien sau khi giam 20%.
}

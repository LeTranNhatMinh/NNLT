// Viết chương trình hiển thị tổng tiền 10 cuốn sổ tay, biết giá mỗi cuôn sổ là 500 và nhân ngày 20-11 nhà sách giảm 20% tổng tiền mỗi đơn hàng.

#include<stdio.h>

// Tổng (S) tiền 10 cuốn sổ tay.

int main(){
    int S,N; // Khai báo biến S.
    S = (500 * 10); // Tính tổng 10 cuốn sổ tay giá gốc.
    N = S -(S* 20 / 100); // Tính tổng 10 cuốn sổ tay sau khi giảm giá 20%.
    printf("Tong tien 10 cuon so tay gia goc la: %d",S); // In ra tổng 10 cuốn sổ tay giá gốc.
    printf("\nTong tien 10 cuon so tay sau khi giam 20%% la: %d", N); // In ra tổng số tiền sau khi giảm 20%.
}

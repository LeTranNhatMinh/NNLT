//Yêu cầu người dùng nhập vào một số nguyên bất kỳ và hiển thị thông báo số đó là chẵn hay lẻ.

#include <stdio.h>
//Kiểm tra số nguyên (ktsn) người dùng nhập vào có phải số chẵn hay lẻ không.

int main(){
    int ktsn; // Khai báo biến kiểm tra số nguyên(ktsn).
    
    // Yêu cầu người dùng nhập vào một số nguyên bất kỳ và đọc dữ liệu được nhập từ người dùng.
    printf("Nhap vao mot so nguyen bat ky: "); 
    scanf("%d", &ktsn); 
    
    // Kiểm tra số nguyên là số chẵn hay lẻ.
    if (ktsn % 2 == 0)
        printf("%d la so chan!", ktsn); // In ra màn hình nếu số nguyên là số chẵn.
    
    else 
        printf("%d la so le!", ktsn); // In ra màn hình nếu số nguyên là số lẻ.
    
}

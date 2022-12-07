//Yêu cầu người dùng nhập vào một số nguyên bất kỳ và hiển thị thông báo nếu số nguyên đó là số âm.

#include <stdio.h>  
// Kiểm tra số nguyên (ktsn) người dùng nhập vào có phải là số âm không.

int main(){
    int ktsn; // Khai báo biến Kiểm tra số nguyên (ktsn).
    
    // Yêu cầu người dùng nhập vào một số nguyên bất kỳ và đọc dữ liệu được nhập từ người dùng.
    printf("Nhap vao mot so nguyen bat ky: "); 
    scanf("%d", &ktsn);
    
    // Kiểm tra số nguyên có phải số nguyên âm hay không.
    if ( ktsn < 0 )
        printf("So %d la so nguyen am!", ktsn); // In ra màn hình nếu là số nguyên âm.
    
    else 
        printf("So %d khong phai la so nguyen am!", ktsn); // In ra màn hình nếu không phải là số nguyên âm.
    
}

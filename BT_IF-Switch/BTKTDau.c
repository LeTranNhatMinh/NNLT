// Viet chuong trình nhap vào 2 so thuc. Kiem tra xem chúng có cùng dau hay không.
#include<stdio.h>

int main() {
    float a, b; // Khai báo 2 biến a và b.
    
    // Yêu cầu người dùng nhập 2 số thực a và b và đọc dữ liệu được nhập vào từ người dùng.
    printf("Nhap so thuc a, b : "); 
    scanf("%f%f", &a, &b); 
  
   // Xét dấu của hai số a và b.
   if (a <= 0 && b <= 0 || a >= 0 && b >= 0) 
   printf("\nA va B cung dau"); // In ra màn hình a và b cùng dấu.
   
   else
   printf("\nA va B trai dau"); // In ra màn hình a và b trai dấu.
   
}

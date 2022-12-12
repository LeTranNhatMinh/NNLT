
//Yêu cầu người dùng nhập một số nguyên dương n từ bàn phím. Chương trình hiển thị giá trị tổng S = 1 + 1/2 + 1/3 +...+ 1/n.


#include <stdio.h>

int main(){
    int n, i; // Khai báo biến số nguyên và biến đếm n và i.
    float s; // Khai báo biến tổng.
    s = 0; 
    // Yêu cầu người dùng nhập số nguyên n và đọc dữ liệu được nhập tự người dùng.
    printf("Vui long nhap n: ");
    scanf("%d",&n);
    
    // Vòng lập để tính giá trị tổng S = 1 + 1/2 + 1/3 +...+ 1/n.
    for (i = 1; i <= n; i++)
    
        s += 1.0/i;
        
    printf("Tong S cua S = 1 + 1/2 + 1/3 +...+ 1/%d : %f ",n , s); // In ra giá trị tổng s
    
}

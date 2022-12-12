//Xuất rà màn hình số nguyên dương n nhỏ nhất sao cho 1 + 2 +...+ n > 10000.

#include <stdio.h>

int main (){
    int n,S; // Khai báo biến n và S.
    S = 0; 
    
    //Dùng vòng lập While để tìm số nguyên dương n.    
    while(S < 10000){
        n++;
        S += n;
}
    printf("Tong S la : %d",S); // In ra màn hình tổng S khi S > 10000.
    printf("\nSo nguyen duong n la : %d",n); // In ra màn hình số nguyên dương n nhỏ nhất khi S > 10000.
}

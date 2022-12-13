// Hiển thị tất cả các số lẻ nhỏ hơn 100 trừ các số 5, 7, 93.

#include <stdio.h>

int main (){
   int a = 1; //Khai báo biến a.
    // Xử lý và in ra giá trị
    do {
        if (a % 2 != 0){
            
            if (a == 5 || a == 7 || a == 93){
                a+=2;
                continue;
            }
        printf("%d ", a); 
        a+=2;
        }
    }while(a < 100);

}

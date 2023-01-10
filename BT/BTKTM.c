#include<stdio.h>

// Khai báo hàm.
int tong01(int a, int b);
void tong02(int a, int b);

int main() {
   
   int a = 5; int b = 6; // Khai báo biến, gán giá trị cho biến a = 5; b = 6.
   
   int s = tong01(a,b); // Khai báo biến tổng và gọi hàm tong01 và truyền hay đối số vào
   printf("Tong cua %d + %d = %d dung ham tong01\n", a, b, s); // In ra tổng của a, b khi dùng hàm tong01.
   tong02(a,b); // Gọi hàm tong02 và truyền vào hai đối số a và b
}
// Xử dụng hàm tong01 để tính tổng s.
int tong01(int a, int b){
    int s = 0; // Khai báo biến s và gán giá trị cho s = 0.
    s = a + b; // Gán s bằng tổng của a và b.
    return (s); // Trả về giá trị s sau khi xử lý.
}

// Xử dụng hàm tong02 để tính tổng s.
void tong02(int a, int b){
    int s = 0; // Khai báo biến s và gán giá trị cho s = 0.
    s = a + b; // Gán s bằng tổng của a và b.
    printf("Tong cua %d + %d = %d dung ham tong02\n", a, b, s); // In ra tổng của a, b khi dùng hàm tong02.
}

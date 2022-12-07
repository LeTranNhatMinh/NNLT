// Yêu cầu người dùng nhập vào điểm của một học sinh từ 0 đến 10 và hiển thị thông báo theo quy tắc.

#include <stdio.h>
// Nhập điểm (diem) học sinh và hiển thị học lực.

int main(){
    int diem; // Khai báo biến điểm (diem).
    
    // Yêu cầu người dùng nhập vào điểm của học sinh và đọc dữ liệu được nhập từ người dùng.
    printf("Nhap diem cua hoc sinh: "); 
    scanf("%d", &diem); 
    
    // Kiểm tra điểm người dùng vừa nhập và in ra học lực.
    if (diem >= 0 && diem < 5)
        printf("%d la hoc luc Yeu.",diem); // In ra học lực yếu nếu 0 <= diem < 5.
        
    else if (diem == 5)
        printf("%d la hoc luc Trung binh.",diem); // In ra học lực trung bình nếu diem = 5.
        
    else if (diem == 6)
        printf("%d la hoc luc Trung binh kha.",diem); // In ra học lực trung bình khá nếu diem = 6.
        
    else if (diem == 7)
        printf("%d la hoc luc Kha.",diem); // In ra học lực khá nếu diem = 7.
        
    else if (diem == 8)
        printf("%d la hoc luc Gioi.",diem); // In ra học lực giỏi nếu diem = 8.
        
    else if (diem == 9 || diem == 10) 
        printf("%d la hoc luc Xuat sac.",diem); // In ra học lực xuất sắc nếu diem = 9 hoặc diem = 10.
        
    else 
        printf("Vao diem sai vui long nhap lai."); // Yêu cầu người dùng nhập lại điểm.
    
}

//Cho số nguyên n >=1 được nhập từ bàn phím. Viết chương trình:
//- Hiển thị ra màn hình từ tiếng Anh viết thường tương ứng với
//n nếu 1<= n <= 9.
//- Hiển thị ra màn hình Greater than 9 trường hợp ngược lại.

#include <stdio.h>

int main(){
    int n; // Khai báo biến n.
    // Yêu cầu người dùng nhập dữ liệu và đọc dữ liệu được nhập từ người dùng.
    printf("Nhap n (n > 0): "); 
    scanf("%d",&n);
    
    // Kiểm tra điều kiện, xử lý và in ra dữ liệu theo yêu cầu.
    if (n > 0) {
	    switch(n){
	        case 1 :
	        printf("one");break;
	        
	        case 2 :
	        printf("two");break;
	        
	        case 3 :
	        printf("three");break;
	        
	        case 4 :
	        printf("four");break;
	        
	        case 5 :
	        printf("five");break;
	        
	        case 6 : 
	        printf("six");break;
	        
	        case 7 :
	        printf("seven");break;
	        
	        case 8 :
	        printf("eight");break;
	        
	        case 9 :
	        printf("nine");break;
	        
	        default :
	        printf("Greater than 9.");
	    }
	}
	else printf("Nhap sai vui long nhap lai.");
    
}



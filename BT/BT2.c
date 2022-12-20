//Cho 2 số nguyên dương a, b với a <= b được nhập từ bàn phím. 
//Viết chương trình hiển thị số nguyên (n) thuộc [a, b] với yêu cầu:
//- Hiển thị ra màn hình từ tiếng Anh viết thường tương ứng nếu 1<= n <= 9.
//- Hiển thị ra màn hình even nếu n là số chẵn và n > 9.
//- Hiển thị ra màn hình odd nếu n là số lẻ và n > 9.

#include<stdio.h>

int main(){
    int a,b; //Khai báo biến a và b.
    // Yêu cầu người dùng nhập dữ liệu và đọc dữ liệu được nhập từ người dùng.
    printf("Nhap vao a va b :");
    scanf("%d%d",&a, &b);
    
    //Kiểm tra điều kiện và xử lý, in dữ liệu theo yêu cầu.
    if (a > 0){
        while (a <= b){
            switch(a){
        	        case 1 :
        	        printf("one\n");break;
        	        
        	        case 2 :
        	        printf("two\n");break;
        	        
        	        case 3 :
        	        printf("three\n");break;
        	        
        	        case 4 :
        	        printf("four\n");break;
        	        
        	        case 5 :
        	        printf("five\n");break;
        	        
        	        case 6 : 
        	        printf("six\n");break;
        	        
        	        case 7 :
        	        printf("seven\n");break;
        	        
        	        case 8:
        	        printf("eight\n");break;
        	        
        	        case 9:
        	        printf("nine\n");break;
        	        
        	        default :
        	        
        	        if ( a > 9 && a % 2 == 0) printf("even\n");
        	        
                    else if ( a > 9 && a % 2 != 0) printf("odd\n");
            }
            a++;
        }
    }
    else printf("Nhap sai vui long nhap lai.");

}

#include <stdio.h>

    int main() {
    int check;
    int arr[100];
   	int n;
   	 int i, pos, new_value;

    do {
        printf("\nMENU\n");
        printf("1. Nhap vao mang\n");
        printf("2. Hien thi mang\n");
        printf("3. Them phan tu\n");
        printf("4. Sua phan tu\n");
        printf("5. Xoa phan tu\n");
        printf("6. Thoat\n");
        printf("Lua chon cua ban: ");
        scanf("%d", &check);

     switch (check) {
       case 1:
                printf("Nhap vao mang co bao nhieu phan tu: ");
                scanf("%d", &n);
                
			    if (n <= 0 || n >100) {
			        printf("So phan tu khong hop le\n");
			        return 1;
			    }

                printf("Nhap cac phan tu cho mang:\n");
                for (int i = 0; i < n; i++) {
                    printf("Nhap phan tu %d: ", i + 1);
                    scanf("%d", &arr[i]);
                }
                break; 	
       case 2:
       	        printf("Mang hien tai: ");
                for (int i = 0; i < n; i++) {
                    printf("%d ", arr[i]);
                }
                printf("\n");
                break;
       case 3:
            int i, pos, value;				
			
			    printf("Nhap vi tri muon them phan tu : ");
			    scanf("%d", &pos);
			 
			    if (pos < 0 || pos > n) {
			        printf("Vi tri khong hop le\n");
			        return 1;
			    }
			
			    printf("Nhap gia tri muon chen: ");
			    scanf("%d", &value);
					    
			    for (i = n; i > pos; i--) {
			        arr[i] = arr[i - 1];
			    } 
				    arr[pos] = value;
				    n++;
			
			    printf("Mang sau khi chen gia tri :\n");
			    for (i = 0; i < n; i++) {
			        printf("%d ", arr[i]);
			    }
			    printf("\n");
			    break;
	   case 4:
		    	printf("Nhap vi tri can sua: " );
			    scanf("%d", &pos);						    
			    
			    if (pos < 0 || pos >= n) {
			        printf("Vi tri khong hop le\n");
			        return 1;
			    }
			    
			    pos=pos-1;
			
			    printf("Nhap gia tri muon thay doi: ");
			    scanf("%d", &new_value);
			
			    arr[pos] = new_value;
			
			    printf("Mang sau khi sua: ");
			    for (int i = 0; i < n; i++) {
			        printf("%d ", arr[i]);
			    }
			    printf("\n");
			    break;
	   case 5:	  
			    printf("Nhap vi tri muon xoa: ");
			    scanf("%d", &pos);
			
			   
			    if (pos < 0 || pos > n) {
			        printf("Vi tri khong hop le\n");
			        return 1;
			    }
			
			     pos=pos-1;
			    
			    for (i = pos; i <n-1; i++) {
			        arr[i] = arr[i+1];
			    } 
				    n--;
			
			    printf("Mang sau khi xoa :\n");
			    for (i = 0; i < n; i++) {
			        printf("%d ", arr[i]);
			    }
			    printf("\n");
			    break;          		    
			 
       case 6:
                printf("Thoat chuong trinh!\n");
                break;

       default:
                printf("Lua chon khong hop le. Vui long chon lai!\n");
        }
    
  } while (check != 6);  

    return 0;
}

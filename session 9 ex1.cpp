	#include <stdio.h>

  int main() {
    int arr[100]; 
    int n;  
    int i, pos, value;

    printf("Nhap so phan tu cua mang(toi da la 100): " );
    scanf("%d", &n);

    if (n <= 0 || n >100) {
        printf("So phan tu khong hop le\n");
        return 1;
    }

   
    printf("Nhap phan tu cho mang:\n");
    for (i = 0; i < n; i++) {
        printf("Phan tu %d: ", i + 1);
        scanf("%d", &arr[i]);
    }

    
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

    return 0;
}


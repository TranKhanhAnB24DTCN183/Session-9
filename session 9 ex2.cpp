#include <stdio.h>

int main() {
    int arr[5] = {8, 5, 6, 9, 30}; 
    int n = 5; 
    int pos, new_value;

    
    printf("Mang ban dau: ");
    for (int i = 0; i < n; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");

    
    printf("Nhap vi tri can sua: " );
    scanf("%d", &pos);

    
    if (pos < 0 || pos >= n) {
        printf("Vi tri khong hop le\n");
        return 1;
    }

    printf("Nhap gia tri muon thay doi: ");
    scanf("%d", &new_value);

    arr[pos] = new_value;

    printf("Mang sau khi sua: ");
    for (int i = 0; i < n; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");

    return 0;
}


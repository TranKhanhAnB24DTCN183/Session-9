#include <stdio.h>
#include <stdbool.h>

bool isPrime(int num) {
    if (num <= 1) return false;
    for (int i = 2; i * i <= num; i++) {
        if (num % i == 0) return false;
    }
    return true;
}

int main() {
    int check, n;
    int arr[100];  

    do {    
        printf("\nMENU\n");
        printf("1. Nhap so phan tu can nhap va gia tri cac phan tu\n");
        printf("2. In ra gia tri cac phan tu dang quan ly\n");
        printf("3. In ra gia tri cac phan tu chan va tinh tong\n");
        printf("4. In ra gia tri lon nhat va nho nhat trong mang\n");
        printf("5. In ra cac phan tu la so nguyen to trong mang va tinh tong\n");
        printf("6. Nhap vao mot so va thong ke trong mang co bao nhieu phan tu do\n");
        printf("7. Them mot phan tu vao vi tri chi dinh\n");
        printf("8. Thoat\n");
        printf("Lua chon cua ban: ");
        scanf("%d", &check);

        switch (check) {
            case 1:
                printf("Nhap so phan tu can nhap: ");
                scanf("%d", &n);

                printf("Nhap gia tri cac phan tu:\n");
                for (int i = 0; i < n; i++) {
                    printf("Nhap phan tu %d: ", i + 1);
                    scanf("%d", &arr[i]);
                }
                break;

            case 2:
                printf("Gia tri cac phan tu trong mang: ");
                for (int i = 0; i < n; i++) {
                    printf("%d ", arr[i]);
                }
                printf("\n");
                break;

            case 3:
                {
                    int sum = 0;
                    printf("Cac phan tu chan: ");
                    for (int i = 0; i < n; i++) {
                        if (arr[i] % 2 == 0) {
                            printf("%d ", arr[i]);
                            sum += arr[i];
                        }
                    }
                    printf("\nTong cac phan tu chan: %d\n", sum);
                }
                break;

            case 4:
                {
                    int max = arr[0], min = arr[0];
                    for (int i = 1; i < n; i++) {
                        if (arr[i] > max) max = arr[i];
                        if (arr[i] < min) min = arr[i];
                    }
                    printf("Gia tri lon nhat trong mang: %d\n", max);
                    printf("Gia tri nho nhat trong mang: %d\n", min);
                }
                break;

            case 5:
                {
                    int sumPrime = 0;
                    printf("Cac phan tu la so nguyen to: ");
                    for (int i = 0; i < n; i++) {
                        if (isPrime(arr[i])) {
                            printf("%d ", arr[i]);
                            sumPrime += arr[i];
                        }
                    }
                    printf("\nTong cac phan tu la so nguyen to: %d\n", sumPrime);
                }
                break;

            case 6:
                {
                    int x, count = 0;
                    printf("Nhap so can thong ke: ");
                    scanf("%d", &x);
                    for (int i = 0; i < n; i++) {
                        if (arr[i] == x) count++;
                    }
                    printf("So phan tu %d trong mang: %d\n", x, count);
                }
                break;

            case 7:
                {
                    int pos, value;
                    printf("Nhap vi tri can them (0 den %d): ", n);
                    scanf("%d", &pos);
                    if (pos < 0 || pos > n) {
                        printf("Vi tri khong hop le!\n");
                        break;
                    }

                    printf("Nhap gia tri phan tu can them: ");
                    scanf("%d", &value);

                    for (int i = n; i > pos; i--) {
                        arr[i] = arr[i - 1];  
                    }
                    arr[pos] = value;
                    n++;
                    printf("Phan tu da duoc them vao vi tri %d.\n", pos);
                }
                break;

            case 8:
                printf("Thoat chuong trinh!\n");
                break;

            default:
                printf("Lua chon khong hop le. Vui long chon lai!\n");
        }

    } while (check != 8);  

    return 0;
}


#include <stdio.h>

int main() {
    int matrix[100][100]; 
    int n;
    int check;  

    do {
        printf("\nMENU\n");
        printf("1. Nhap kich thuoc va gia tri cac phan tu cua ma tran\n");
        printf("2. In gia tri cac phan tu cua ma tran\n");
        printf("3. In ra gia tri cac phan tu la so le va tinh tong\n");
        printf("4. In ra cac phan tu tren duong bien va tinh tich\n");
        printf("5. In ra cac phan tu tren duong cheo chinh\n");
        printf("6. In ra cac phan tu tren duong cheo phu\n");
        printf("7. In ra dong co tong gia tri cac phan tu la lon nhat\n");
        printf("8. Thoat\n");
        printf("Lua chon cua ban: ");
        scanf("%d", &check);

        switch (check) {
            case 1:
                printf("Nhap kich thuoc ma tran (n x n): ");
                scanf("%d", &n);
                printf("Nhap cac phan tu cua ma tran:\n");
                for (int i = 0; i < n; i++) {
                    for (int j = 0; j < n; j++) {
                        printf("Nhap gia tri phan tu [%d][%d]: ", i, j);
                        scanf("%d", &matrix[i][j]);
                    }
                }
                break;

            case 2:
                printf("Ma tran:\n");
                for (int i = 0; i < n; i++) {
                    for (int j = 0; j < n; j++) {
                        printf("%d ", matrix[i][j]);
                    }
                    printf("\n");
                }
                break;

            case 3:
                {
                    int sum = 0;
                    printf("Cac phan tu la so le: ");
                    for (int i = 0; i < n; i++) {
                        for (int j = 0; j < n; j++) {
                            if (matrix[i][j] % 2 != 0) {
                                printf("%d ", matrix[i][j]);
                                sum += matrix[i][j];
                            }
                        }
                    }
                    printf("\nTong cac so le: %d\n", sum);
                }
                break;

            case 4:
                {
                    int product = 1;
                    printf("Cac phan tu tren duong bien: ");
                    for (int i = 0; i < n; i++) {
                        for (int j = 0; j < n; j++) {
                            if (i == 0 || i == n - 1 || j == 0 || j == n - 1) {
                                printf("%d ", matrix[i][j]);
                                product *= matrix[i][j];
                            }
                        }
                    }
                    printf("\nTich cac phan tu duong bien: %d\n", product);
                }
                break;

            case 5:
                printf("Cac phan tu tren duong cheo chinh: ");
                for (int i = 0; i < n; i++) {
                    printf("%d ", matrix[i][i]);
                }
                printf("\n");
                break;

            case 6:
                printf("Cac phan tu tren duong cheo phu: ");
                for (int i = 0; i < n; i++) {
                    printf("%d ", matrix[i][n - i - 1]);
                }
                printf("\n");
                break;

            case 7:
                {
                    int maxSum = -1, maxRow = -1;
                    for (int i = 0; i < n; i++) {
                        int sum = 0;
                        for (int j = 0; j < n; j++) {
                            sum += matrix[i][j];
                        }
                        if (sum > maxSum) {
                            maxSum = sum;
                            maxRow = i;
                        }
                    }
                    printf("Dong tong gia tri lon nhat %d\n",maxSum);
                }
                break;

            case 8:
                printf("Thoat chuong trinh\n");
                break;

            default:
                printf("Lua chon khong hop le"); 
		}

    } while (check != 8); 

    return 0;
}


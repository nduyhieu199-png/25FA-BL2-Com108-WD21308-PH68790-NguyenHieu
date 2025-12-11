#include <stdio.h>
#include <stdlib.h>  

// Bài 1 - Thông tin thú cưng
void bai1() {
    struct Pet {
        char id[20], name[50];
        int birthYear, age;
    };

    struct Pet pets[3];
    int currentYear = 2025;

    for (int i = 0; i < 3; i++) {
        printf("Ma thu cung: ");
        scanf("%s", pets[i].id);
        printf("Ten thu cung: ");
        scanf(" %[^\n]", pets[i].name);
        printf("Nam sinh: ");
        scanf("%d", &pets[i].birthYear);
        pets[i].age = currentYear - pets[i].birthYear;
    }

    printf("\nThong tin cac thu cung:\n");
    for (int i = 0; i < 3; i++) {
        printf("\n%s - %s, %d tuổi\n", pets[i].id, pets[i].name, pets[i].age);
    }
}

// Bài 2 - Tính tổng các số lẻ và kiểm tra chia hết cho 5
void bai2() {
    int n, sum = 0;

    // Nhập số nguyên dương n (n > 3)
    do {
        printf("Nhap so nguyen duong n (n > 3): ");
        scanf("%d", &n);
    } while (n <= 3);  // Kiểm tra điều kiện n > 3

    // Tính tổng các số lẻ từ 1 đến n
    for (int i = 1; i <= n; i += 2) {  // Duyệt qua các số lẻ
        sum += i;
    }

    // In tổng các số lẻ
    printf("Tong cac so le tu 1 den %d la: %d\n", n, sum);

    // Kiểm tra n có chia hết cho 5 hay không
    if (n % 5 == 0) {
        printf("So %d chia het cho 5\n", n);
    }
    else {
        printf("So %d khong chia het cho 5\n", n);
    }
}

// Bài 3 - Nhập mảng cân nặng và tính toán
void bai3() {
    int n;
    printf("Nhap so luong thu cung: ");
    scanf("%d", &n);

    // Kiểm tra nếu số lượng thú cưng phải lớn hơn 0
    if (n <= 0) {
        printf("So luong thu cung phai lon hon 0\n");  // Không có dấu chấm ở cuối
        return;
    }

    float* weights = (float*)malloc(n * sizeof(float));
    if (weights == NULL) {
        printf("Khong the cap phat bo nho\n");
        return;
    }

    float totalWeight = 0.0;
    float minWeight = 10000.0;  // Khởi tạo giá trị min cao để tìm cân nặng thấp nhất

    // Nhập mảng cân nặng của thú cưng
    printf("Nhap can nang cho %d thu cung:\n", n);
    for (int i = 0; i < n; i++) {
        printf("Can nang thu cung %d: ", i + 1);
        scanf("%f", &weights[i]);
        totalWeight += weights[i];

        // Tìm cân nặng thấp nhất
        if (weights[i] < minWeight) {
            minWeight = weights[i];
        }
    }

    // Tính cân nặng trung bình
    float avgWeight = totalWeight / n;

    // Đếm số thú cưng có cân nặng dưới mức trung bình
    int countBelowAvg = 0;
    for (int i = 0; i < n; i++) {
        if (weights[i] < avgWeight) {
            countBelowAvg++;
        }
    }

    // In kết quả
    printf("\nCan nang trung binh: %.2f\n", avgWeight);
    printf("Can nang thap nhat: %.2f\n", minWeight);
    printf("So thu cưng nang duoi muc trung binh: %d\n", countBelowAvg);


    free(weights);
}

int main() {
    int chon;
    do {
        printf("\n===== MENU =====\n");
        printf("1. Thong tin thu cung\n");
        printf("2. Tinh tong\n");
        printf("3. Thong tin cua hang\n");
        printf("0. Thoat\n");
        printf("Nhap lua chon: ");
        scanf("%d", &chon);
        getchar();

        switch (chon) {
        case 1: bai1(); break;
        case 2: bai2(); break;
        case 3: bai3(); break;
        case 0: printf("Thoat chuong trinh\n"); break;
        default: printf("Lua chon khong hop le\n");
        }

    } while (chon != 0);

    return 0;
}

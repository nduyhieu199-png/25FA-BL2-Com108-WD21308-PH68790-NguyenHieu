#include <stdio.h>
#include <math.h>
#include <string.h>

// ---------------------------
// KHAI BAO NGUYEN MAU HAM
// ---------------------------
void kiem_tra_so_nguyen();
void tim_uoc_boi_so_chung();
void karaoke();
void tinh_tien_dien();
void doi_tien();
void vay_tien_mua_xe();
void xep_loai_sinh_vien();
void game_fpoly_lott();
void tinh_toan_phan_so();
void tinh_lai_vay();  

// ---------------------------
// HAM MAIN - CHUONG TRINH CHINH
// ---------------------------
int main() {
    int chon;

    do {
        // Hien thi Menu
        printf("\n==== MENU CHUONG TRINH ====\n");
        printf("1. Kiem tra so nguyen\n");
        printf("2. Tim uoc chung và boi chung cua 2 so\n");
        printf("3. Tinh tien cho quan Karaoke\n");
        printf("4. Tinh tien dien\n");
        printf("5. Đoi tien\n");
        printf("6. Tinh tien vay mua xe\n");
        printf("7. Xep loai sinh vien\n");
        printf("8. Game FPOLY-LOTT\n");
        printf("9. Tinh toan phan so\n");
        printf("10. Tinh lai suat vay ngan hang\n");
        printf("===========================\n");

        printf("Chon chuc nang tren Menu: ");
        scanf("%d", &chon);

        // Xu ly lua chon
        switch (chon) {
        case 1:
            kiem_tra_so_nguyen();
            break;
        case 2:
            tim_uoc_boi_so_chung();
            break;
        case 3:
            karaoke();
            break;
        case 4:
            tinh_tien_dien();
            break;
        case 5:
            doi_tien();
            break;
        case 6:
            vay_tien_mua_xe();
            break;
        case 7:
            xep_loai_sinh_vien();
            break;
        case 8:
            game_fpoly_lott();
            break;
        case 9:
            tinh_toan_phan_so();
            break;
        case 10:
            tinh_lai_vay();  
            break;
        default:
            printf("\n--- Lua chon khong hop le! Vui long chon lai tu 1 đen 10. ---\n");
        }

    } while (chon != 0); // Lặp lại cho đến khi người dùng chọn "0" (Thoát)

    return 0;
}

// ---------------------------
// 1. CHỨC NĂNG KIỂM TRA SỐ NGUYÊN
// ---------------------------
void kiem_tra_so_nguyen() {
    int x;
    printf("\nNhap vao mot so nguyen: ");
    scanf("%d", &x);

    printf("So %d co phai là so nguyen?\n", x);

    // Kiểm tra số nguyên tố
    if (x < 2) {
        printf("So %d khong phai là so nguyen to.\n", x);
    }
    else {
        int is_prime = 1;
        for (int i = 2; i <= sqrt(x); i++) {
            if (x % i == 0) {
                is_prime = 0;
                break;
            }
        }
        if (is_prime) {
            printf("So %d là so nguyen to.\n", x);
        }
        else {
            printf("So %d khong phai là so nguyen to.\n", x);
        }
    }

    // Kiểm tra số chính phương
    int sqrt_x = (int)sqrt(x);
    if (sqrt_x * sqrt_x == x) {
        printf("So %d la so chinh phuong.\n", x);
    }
    else {
        printf("So %d khong phai là so chinh phuong.\n", x);
    }
}

// ---------------------------
// 2. CHỨC NĂNG TÌM ƯỚC CHUNG, BỘI CHUNG CỦA 2 SỐ
// ---------------------------
void tim_uoc_boi_so_chung() {
    int x, y;
    printf("\nNhap vao 2 so nguyen: ");
    scanf("%d %d", &x, &y);

    int gcd, lcm;
    int a = x, b = y;

    // Tính GCD
    while (b != 0) {
        int temp = b;
        b = a % b;
        a = temp;
    }
    gcd = a;

    // Tính LCM
    lcm = (x * y) / gcd;

    printf("Uoc so chung lon nhat cua %d và %d là: %d\n", x, y, gcd);
    printf("Boi so chung nho nhat cua %d và %d là: %d\n", x, y, lcm);
}

// ---------------------------
// 3. CHỨC NĂNG TÍNH TIỀN CHO QUÁN KARAOKE
// ---------------------------
void karaoke() {
    int start, end;
    printf("Nhap gio bat dau: ");
    scanf("%d", &start);
    printf("Nhap gio ket thuc: ");
    scanf("%d", &end);

    if (start < 12 || end > 23 || start >= end) {
        printf("Gio khong hop le.\n");
        return;
    }

    int duration = end - start;
    float total = 150000;

    if (duration > 3) {
        total += (duration - 3) * 150000 * 0.7;
    }
    if (start >= 14 && start <= 17) {
        total *= 0.9; // Giảm 10% nếu giờ bắt đầu trong khoảng từ 14-17
    }

    printf("Tien phai tra cho quan Karaoke la: %.2f VND\n", total);
}

// ---------------------------
// 4. CHỨC NĂNG TÍNH TIỀN ĐIỆN
// ---------------------------
void tinh_tien_dien() {
    float kwh;
    printf("\nNhap so kWh su dung: ");
    scanf("%f", &kwh);

    float total = 0;
    if (kwh <= 50) {
        total = kwh * 1.678;
    }
    else 
        if (kwh <= 100) {
        total = 50 * 1.678 + (kwh - 50) * 1.734;
    }
    else 
        if (kwh <= 200) {
        total = 50 * 1.678 + 50 * 1.734 + (kwh - 100) * 2.014;
    }
    else 
        if (kwh <= 300) {
        total = 50 * 1.678 + 50 * 1.734 + 100 * 2.014 + (kwh - 200) * 2.536;
    }
    else 
        if (kwh <= 400) {
        total = 50 * 1.678 + 50 * 1.734 + 100 * 2.014 + 100 * 2.536 + (kwh - 300) * 2.834;
    }
    else {
        total = 50 * 1.678 + 50 * 1.734 + 100 * 2.014 + 100 * 2.536 + 100 * 2.834 + (kwh - 400) * 2.927;
    }

    printf("Tien dien phai tra la: %.2f VND\n", total);
}

// ---------------------------
// 5. CHỨC NĂNG ĐỔI TIỀN
// ---------------------------
void doi_tien() {
    int amount;
    printf("\nNhap so tien can doi: ");
    scanf("%d", &amount);

    int denominations[] = { 500, 200, 100, 50, 20, 10, 5, 2, 1 };
    int num_denominations = sizeof(denominations) / sizeof(denominations[0]);

    printf("So tien duoc doi ra:\n");
    for (int i = 0; i < num_denominations; i++) {
        if (amount >= denominations[i]) {
            int count = amount / denominations[i];
            amount %= denominations[i];
            printf("%d to %d VND\n", count, denominations[i]);
        }
    }
}

// ---------------------------
// 6. CHỨC NĂNG TÍNH TIỀN VAY MUA XE
// ---------------------------
void vay_tien_mua_xe() {
    float gia_xe = 500000000;  // Giá trị xe cố định là 500 triệu VND
    float phan_tram_vay;
    float so_tien_vay, so_tien_tra_truoc, so_tien_tra_hang_thang;
    float lai_suat_nam = 0.072;  // Lãi suất cố định 7.2% mỗi năm
    int thoi_gian_vay = 24;  // Thời gian vay 24 năm (288 tháng)

    // Nhập phần trăm vay tối đa
    printf("Nhap phan tram vay toi da (vi du 80 cho vay 80%%): ");
    scanf("%f", &phan_tram_vay);

    // Tính số tiền vay và số tiền trả trước
    so_tien_vay = gia_xe * (phan_tram_vay / 100);  // Số tiền vay = giá trị xe * phần trăm vay
    so_tien_tra_truoc = gia_xe - so_tien_vay;  // Số tiền trả trước = giá trị xe - số tiền vay

    // Tính số tiền trả hàng tháng (vay cố định với lãi suất)
    // Công thức tính tiền trả hàng tháng: (Số tiền vay * (1 + lãi suất hàng năm)) / tổng số tháng vay
    so_tien_tra_hang_thang = (so_tien_vay * (1 + lai_suat_nam)) / (thoi_gian_vay * 12);  // Tính số tiền phải trả hàng tháng

    // Hiển thị kết quả
    printf("So tien phai tra lan dau (tra truoc): %.2f VND\n", so_tien_tra_truoc);
    printf("So tien phai tra hang thang: %.2f VND\n", so_tien_tra_hang_thang);
}

// ---------------------------
// 7. CHỨC NĂNG XẾP LOẠI SINH VIÊN
// ---------------------------
// Hàm phân loại học lực
char* xep_loai_hoc_luc(float diem) {
    if (diem >= 9.0) return "Xuat sac";
    if (diem >= 8.0) return "Gioi";
    if (diem >= 6.5) return "Kha";
    if (diem >= 5.0) return "Trung binh";
    if (diem <5)return "Yeu";
}

// Hàm sắp xếp và hiển thị thông tin sinh viên
void xep_loai_sinh_vien() {
    int n;
    printf("Nhap so luong sinh viên (toi da 100): ");
    scanf("%d", &n);

    // Khai báo mảng có kích thước cố định
    char names[100][100];  // Tên sinh viên 
    float scores[100];      // Điểm của sinh viên

    // Nhập thông tin sinh viên
    for (int i = 0; i < n; i++) {
        printf("Nhap ten sinh vien %d: ", i + 1);
        getchar();  // Đọc ký tự newline còn lại
        fgets(names[i], sizeof(names[i]), stdin);  
        names[i][strcspn(names[i], "\n")] = 0;  

        printf("Nhap diem cua sinh vien %d: ", i + 1);
        scanf("%f", &scores[i]);
    }

    // Sắp xếp sinh viên theo điểm giảm dần
    for (int i = 0; i < n - 1; i++) {
        for (int j = i + 1; j < n; j++) {
            if (scores[i] < scores[j]) {
                // Hoán đổi điểm
                float temp_score = scores[i];
                scores[i] = scores[j];
                scores[j] = temp_score;

                // Hoán đổi tên sinh viên
                char temp_name[100];
                strcpy(temp_name, names[i]);
                strcpy(names[i], names[j]);
                strcpy(names[j], temp_name);
            }
        }
    }

    // Hiển thị kết quả
    printf("\nDanh sach sinh vien sau khi sap xep theo diem giam dan:\n");
    for (int i = 0; i < n; i++) {
        // Phân loại học lực
        char* grade = xep_loai_hoc_luc(scores[i]);
        printf("%s - Diem: %.2f - Hoc luc: %s\n", names[i], scores[i], grade);
    }
}

// ---------------------------
// 8. CHỨC NĂNG GAME FPOLY-LOTT
// ---------------------------
void game_fpoly_lott() {
    int guess1, guess2;
    printf("\nNhap 2 so tu 01 den 15: ");
    scanf("%d %d", &guess1, &guess2);

    srand(time(NULL));
    int num1 = rand() % 15 + 1;
    int num2 = rand() % 15 + 1;

    printf("So he thong da chon: %02d %02d\n", num1, num2);

    if (guess1 == num1 && guess2 == num2) {
        printf("Chuc mung ban da trung giai nhat!\n");
    }
    else if (guess1 == num1 || guess2 == num2) {
        printf("Chuc mung ban da trung giai nhi!\n");
    }
    else {
        printf("Chuc ban may man lan sau!\n");
    }
}

// ---------------------------
// 9. CHỨC NĂNG TÍNH TOÁN PHÂN SỐ
// ---------------------------
void tinh_toan_phan_so() {
    float tu1, mau1, tu2, mau2;
    printf("Nhap phan so thu 1 (tu so, mau so): ");
    scanf("%f %f", &tu1, &mau1);
    printf("Nhap phan so thu 2 (tu so, mau so): ");
    scanf("%f %f", &tu2, &mau2);

    if (mau1 == 0 || mau2 == 0) {
        printf("Mau so khong the bang 0!\n");
        return;
    }

    float tong = (tu1 / mau1) + (tu2 / mau2);
    float hieu = (tu1 / mau1) - (tu2 / mau2);
    float tich = (tu1 / mau1) * (tu2 / mau2);
    float thuong = (tu1 / mau1) / (tu2 / mau2);

    printf("Tong: %.2f\n", tong);
    printf("Hieu: %.2f\n", hieu);
    printf("Tich: %.2f\n", tich);
    printf("Thuong: %.2f\n", thuong);
}

// ---------------------------
// 10. CHỨC NĂNG TÍNH LÃI SUẤT VAY NGÂN HÀNG
// ---------------------------
void tinh_lai_vay() {
    float loan_amount;      // Số tiền vay
    float interest_rate = 0.05; // Lãi suất hàng tháng 5%
    int months = 12;        // Kỳ hạn vay 12 tháng
    float monthly_payment;  // Số tiền trả hàng tháng

    // Nhập số tiền vay
    printf("Nhap so tien muon vay (VND): ");
    scanf("%f", &loan_amount);

    // Tính số tiền phải trả hàng tháng
    monthly_payment = (loan_amount * (1 + interest_rate)) / months;

    // Hiển thị kết quả
    printf("So tien vay: %.2f VND\n", loan_amount);
    printf("Lai suat hang thang: 5%\n");
    printf("So tien phai tra hang thang trong 12 thang: %.2f VND\n", monthly_payment);
}

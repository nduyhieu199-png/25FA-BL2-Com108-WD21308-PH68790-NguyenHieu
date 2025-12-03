#include <stdio.h>
#include <math.h>

// Khai báo các hàm
void kiem_tra_so_nguyen();
void uoc_boi_cua_hai_so();
void tinh_tien_karaoke();
void tinh_tien_dien();
void doi_tien();
void tinh_lai_suat_vay();
void vay_tien_mua_xe();
void sap_xep_thong_tin_sinh_vien();
void game_fpoly_lott();
void tinh_toan_phan_so();

int main() {
    int chon;

    // Thêm getchar() ?? xóa ký t? '\n' còn l?i t? l?n nh?p tr??c
    getchar();

    do {
        // Menu ch??ng trình
        printf("\n==== MENU CHUONG TRINH ====\n");
        printf("1. Ki?m tra s? nguyên, nguyên t?, chính ph??ng\n");
        printf("2. Tìm ??c s? chung l?n nh?t và B?i s? chung nh? nh?t\n");
        printf("3. Tính ti?n cho quán Karaoke\n");
        printf("4. Tính ti?n ?i?n\n");
        printf("5. ??i ti?n\n");
        printf("6. Tính lãi su?t vay ngân hàng vay tr? góp\n");
        printf("7. Tính ti?n vay mua xe\n");
        printf("8. S?p x?p thông tin sinh viên\n");
        printf("9. Game FPOLY-LOTT\n");
        printf("10. Tính toán phân s?\n");
        printf("11. Thoát\n");
        printf("===========================\n");

        printf("Ch?n ch?c n?ng: ");
        scanf("%d", &chon);

        switch (chon) {
        case 1:
            kiem_tra_so_nguyen();
            break;
        case 2:
            uoc_boi_cua_hai_so();
            break;
        case 3:
            tinh_tien_karaoke();
            break;
        case 4:
            tinh_tien_dien();
            break;
        case 5:
            doi_tien();
            break;
        case 6:
            tinh_lai_suat_vay();
            break;
        case 7:
            vay_tien_mua_xe();
            break;
        case 8:
            sap_xep_thong_tin_sinh_vien();
            break;
        case 9:
            game_fpoly_lott();
            break;
        case 10:
            tinh_toan_phan_so();
            break;
        case 11:
            printf("\n--- Thoát ch??ng trình. T?m bi?t! ---\n");
            break;
        default:
            printf("\n--- L?a ch?n không h?p l?! Vui lòng ch?n l?i t? 1 ??n 11. ---\n");
        }
    } while (chon != 11); // L?p l?i ??n khi ng??i dùng ch?n 11 (Thoát)

    // Gi? c?a s? m? sau khi ch?y xong
    printf("Nh?n Enter ?? k?t thúc ch??ng trình...");
    getchar();  // ??i ng??i dùng nh?n Enter
    getchar();  // Thêm m?t l?n getchar() ?? ??m b?o ch??ng trình không thoát ngay
    return 0;
}


// CConsoleApplication.c : file nay chua 'main' function. 
// Chuong trinh phan mem Bat dau thuc thi & Ket thuc o day.

#include <stdio.h>

int main()
{
int intergerArray[50];
int i;
int length;
int tmp;//temp
printf("Nhap so luong phan tu mang: ");
scanf("%d", &length);
printf("Nhap du lieu mang %d phan tu:\n ", length);
for (i = 0; i < length; i++)
{
    printf("mang[%d] = ", i);
    scanf("%d", &intergerArray[i]);
}
printf("Xuat du lieu mang %d phan tu :\n", length);
for (i = 0; i < length; i++);
{
    if (intergerArray[i] > intergerArray[i + 1])
    {
        tmp = intergerArray[1];
        intergerArray[i] = intergerArray[i + 1];
        intergerArray[i + 1] = tmp;
        i = -1;
    }

}
printf("Xuat du lieu mang %d phan tu Giam dan\n", length);
for (i = length - 1; i > -1; i--)
{
    printf("mang[%d] = %d\n", i, intergerArray[i]);
}
printf("Xuat dua lieu mang %d phan tu Giam dan\n", length);
for (i = 0; i < length; i++)
{
    printf("mang[%d] = %d\n", i, intergerArray[i]);


}
}
void demoString() {
    //string-"string.h"
    char mangKytu[50];
	//fgets(mangkyTu);

    while (getchar() != '\n');

	printf("Nhap du lieu: ");
	fgets(mangKytu, sizeof(mangKytu), stdin);

    printf("%s", mangKytu);
    printf("\n");
    //puts(mangKytu);

	printf("String Length:");
	printf("%d\n", strlen(mangKytu)-1);
    printf("String Compare:");
    printf("%d\n", strcmp("aBc", "aBc"));

}

// Debug/Run chuong trinh: bam "F5" hoac "Debug > Start Debugging" tren menu

// Danh cho nguoi moi bat dau:
//   1. Dung "Solution Explorer window" de them/quan ly cac files
//   2. Dung "Output window" de kiem tra "build output" va "cac thong bao khac"
//   3. Dung "Error List window" de xem loi
//   4. Chon "Project > Add New Item" de tao moi file code,
//      hoac "Project > Add Existing Item" de them file da ton tai vao project nay.
//   5. Sau nay, de mo lai project nay,
//      chon "File > Open > Project" va chon file *.sln
//      Co the xem thu muc project, noi luu file *.sln bang cach
//      bam phim chuot phai vao "Solution" > chon "Open Folder in File Explorer"

// GV: AnhTT184
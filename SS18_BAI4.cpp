#include <stdio.h>

// Khoi tao cau truc sinh vien
struct Student {
    int id;
    char name[50];
    int age;
    char phoneNumber[15];
};

int main() {
    // Khai bao mang sinh vien co do dai 50 phan tu
    struct Student students[50];

    // Nhap thong tin cho 5 sinh vien
    for (int i = 0; i < 5; i++) {
        students[i].id = i + 1; // Tu dong gan gia tri id bat dau tu 1
        printf("Nhap thong tin cho sinh vien thu %d:\n", i + 1);
        printf("Nhap ten sinh vien: ");
        getchar(); // Xoa ky tu new line con lai tu lan nhap truoc
        fgets(students[i].name, sizeof(students[i].name), stdin);
        printf("Nhap tuoi sinh vien: ");
        scanf("%d", &students[i].age);
        printf("Nhap so dien thoai sinh vien: ");
        scanf("%s", students[i].phoneNumber);
    }

    // In thong tin cac sinh vien
    printf("\nThong tin cac sinh vien:\n");
    for (int i = 0; i < 5; i++) {
        printf("Sinh vien thu %d:\n", i + 1);
        printf("ID: %d\n", students[i].id);
        printf("Ten: %s", students[i].name); // fgets tu dong them ky tu newline o cuoi chuoi
        printf("Tuoi: %d\n", students[i].age);
        printf("So dien thoai: %s\n", students[i].phoneNumber);
    }

    return 0;
}


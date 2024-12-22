#include <stdio.h>
#include <string.h>

// Khoi tao cau truc sinh vien
struct Student {
    int id;
    char name[50];
    int age;
    char phoneNumber[15];
};

int main() {
    // Khai bao mang sinh vien co do dai 50 phan tu va co san 5 phan tu
    struct Student students[50] = {
        {1, "Nguyen Van A", 20, "0123456789"},
        {2, "Le Thi B", 21, "0987654321"},
        {3, "Tran Van C", 22, "0123987654"},
        {4, "Pham Thi D", 19, "0987123456"},
        {5, "Hoang Van E", 23, "0112233445"}
    };
    int numOfStudents = 5;

    // Yeu cau nguoi dung nhap id de sua thong tin sinh vien
    int searchId;
    printf("Nhap ID sinh vien can sua thong tin: ");
    scanf("%d", &searchId);

    // Tim kiem sinh vien theo id
    int found = 0;
    for (int i = 0; i < numOfStudents; i++) {
        if (students[i].id == searchId) {
            found = 1;
            printf("Nhap ten moi: ");
            getchar(); // Xoa ky tu new line con lai tu lan nhap truoc
            fgets(students[i].name, sizeof(students[i].name), stdin);
            printf("Nhap tuoi moi: ");
            scanf("%d", &students[i].age);
            break;
        }
    }

    // Kiem tra neu khong tim thay sinh vien
    if (!found) {
        printf("Khong tim thay sinh vien co ID %d.\n", searchId);
    } else {
        printf("Thong tin sinh vien da duoc cap nhat.\n");
    }

    // In thong tin tat ca sinh vien trong mang
    printf("\nThong tin cac sinh vien:\n");
    for (int i = 0; i < numOfStudents; i++) {
        printf("Sinh vien thu %d:\n", i + 1);
        printf("ID: %d\n", students[i].id);
        printf("Ten: %s", students[i].name); // fgets tu dong them ky tu newline o cuoi chuoi
        printf("Tuoi: %d\n", students[i].age);
        printf("So dien thoai: %s\n", students[i].phoneNumber);
    }

    return 0;
}


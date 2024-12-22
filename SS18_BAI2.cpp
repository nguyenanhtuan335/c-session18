#include <stdio.h>

// Khoi tao cau truc sinh vien
struct Student {
    char name[50];
    int age;
    char phoneNumber[15];
};

int main() {
    // Khai bao bien tu cau truc
    struct Student student;

    // Yeu cau nguoi dung nhap vao tung thuoc tinh
    printf("Nhap ten sinh vien: ");
    fgets(student.name, sizeof(student.name), stdin);
    printf("Nhap tuoi sinh vien: ");
    scanf("%d", &student.age);
    printf("Nhap so dien thoai sinh vien: ");
    scanf("%s", student.phoneNumber);

    // In bien ra man hinh
    printf("\nThong tin sinh vien:\n");
    printf("Ten: %s", student.name); // fgets tu dong them ki tu newline o cuoi chuoi
    printf("Tuoi: %d\n", student.age);
    printf("So dien thoai: %s\n", student.phoneNumber);

    return 0;
}


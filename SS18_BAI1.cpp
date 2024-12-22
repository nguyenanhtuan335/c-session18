#include <stdio.h>

// Khoi tao cau truc sinh vien
struct Student {
    char name[50];
    int age;
    char phoneNumber[15];
};

int main() {
    // Khai bao bien tu cau truc va gan gia tri truc tiep
    struct Student student = {"Nguyen Van A", 20, "0123456789"};

    // In bien ra man hinh
    printf("Name: %s\n", student.name);
    printf("Age: %d\n", student.age);
    printf("Phone Number: %s\n", student.phoneNumber);

    return 0;
}


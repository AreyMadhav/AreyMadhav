#include <stdio.h>
struct student {
    char name[50];
    int roll;
    int classs;
    int year;
    float marks;
} s;

int main() {
    printf("Enter information:\n");
    printf("Enter name: ");
    fgets(s.name, sizeof(s.name), stdin);

    printf("Enter roll number: ");
    scanf("%d", &s.roll);
    printf("Enter Class: ");
    scanf("%d", &s.classs);
    printf("Enter Year: ");
    scanf("%d", &s.year);
    printf("Enter marks: ");
    scanf("%f", &s.marks);

    printf("Displaying Information:\n");
    printf("Name: ");
    printf("%s", s.name);
    printf("Roll number: %d\n", s.roll);
    printf("Class: %d\n",s.classs);
    printf("Year: %d\n",s.year);
    printf("Marks: %.1f\n", s.marks);

    return 0;
}

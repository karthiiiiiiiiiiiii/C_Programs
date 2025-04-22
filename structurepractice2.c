#include <stdio.h>
#include <string.h>
struct STUDENT 
{
    char student_name[20];
    int roll_no;
    float student_cgpa;
};
void read_student_details(struct STUDENT *details, int n)
{
    for (int i = 0; i < n; i++) 
    {
        printf("Enter student %d name: ", i + 1);
        scanf("%s", details[i].student_name);
        printf("Enter student %d roll no: ", i + 1);
        scanf("%d", &details[i].roll_no);
        printf("Enter student %d CGPA: ", i + 1);
        scanf("%f", &details[i].student_cgpa);
    }
}
struct STUDENT search_student_by_name(struct STUDENT *details, int n, char *name) 
{
    struct STUDENT not_found;
    not_found.student_name[0] = '\0';
    for (int i = 0; i < n; i++) {
        if (strcmp(details[i].student_name, name) == 0) 
        {
            return details[i];
        }
    }
    return not_found;
}
struct STUDENT search_student_by_roll_no(struct STUDENT *details, int n, int roll_no) 
{
    struct STUDENT not_found;
    not_found.student_name[0] = '\0';
    for (int i = 0; i < n; i++) 
    {
        if (details[i].roll_no == roll_no)
        {
            return details[i];
        }
    }
    return not_found;
}
void print_students_with_cgpa_greater_than_x(struct STUDENT *details, int n, float x) {
    printf("Students with CGPA > %f:\n", x);
    for (int i = 0; i < n; i++) {
        if (details[i].student_cgpa > x) 
        {
            printf("Name: %s, Roll No: %d, CGPA: %f\n", details[i].student_name, details[i].roll_no, details[i].student_cgpa);
        }
    }
}
int main() {
    struct STUDENT students[100];
    int n;
    printf("Enter the number of students: ");
    scanf("%d", &n);
    read_student_details(students, n);
    char name[20];
    printf("Enter name to search: ");
    scanf("%s", name);
    struct STUDENT student = search_student_by_name(students, n, name);
    if (student.student_name[0] != '\0') 
    {
    printf("Student found: Name: %s, Roll No: %d, CGPA: %f\n", student.student_name, student.roll_no, student.student_cgpa);
    } else 
    {
        printf("Student not found\n");
    }
    int roll_no;
    printf("Enter roll no to search: ");
    scanf("%d", &roll_no);
    student = search_student_by_roll_no(students, n, roll_no);
    if (student.student_name[0] != '\0') {
        printf("Student found: Name: %s, Roll No: %d, CGPA: %f\n", student.student_name, student.roll_no, student.student_cgpa);
    } else
    {
        printf("Student not found\n");
    }
    float x;
    printf("Enter CGPA to filter students: ");
    scanf("%f", &x);
    print_students_with_cgpa_greater_than_x(students, n, x);
    return 0;
}
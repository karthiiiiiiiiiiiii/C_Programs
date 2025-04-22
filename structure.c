#include<stdio.h>
struct student{
    char name[100];
    char rollno[100];
    int age;
    long long int phnno;
};
int main(){
    struct student s1={"Pragna","22321A1263",20,7816079545};
    struct student s2={"Rithu","22321A1264",19,7817079545};
    struct student s3={"Vani","22321A1265",18,7818079545};
    struct student s4={"Vicky","22321A1266",19,7819079545};
    struct student s5={"Vinnu","22321A1267",20,7811079545};
    printf("------------------------------\n");
    printf("The details are:\n");
    printf("Name:%s\nRollno:%s\nAge:%d\nphno:.%lld\n",s1.name,s1.rollno,s1.age,s1.phnno);
    printf("Name:%s\nRollno:%s\nAge:%d\nphno:.%lld\n",s2.name,s2.rollno,s2.age,s2.phnno);
    printf("Name:%s\nRollno:%s\nAge:%d\nphno:.%lld\n",s3.name,s3.rollno,s3.age,s3.phnno);
    printf("Name:%s\nRollno:%s\nAge:%d\nphno:.%lld\n",s4.name,s4.rollno,s4.age,s4.phnno);
    printf("Name:%s\nRollno:%s\nAge:%d\nphno:.%lld\n",s5.name,s5.rollno,s5.age,s5.phnno);
    printf("------------------------------\n");
}

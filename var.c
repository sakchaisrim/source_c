#include<stdio.h>
int main(){
    system("cls");
    int age = 20;
    char sex = 'f', nickname = 'N';
    float grade = 3.14;

    age = 15;
    sex = 'M';
    grade = 2.55;

    printf("age = %d, sex= %c, nickname = %c, grade= %.2f", age, sex, nickname, grade);
    return 0;
}
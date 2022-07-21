#include<stdio.h>
int main(){
    system("cls");
    int grade;
    printf("Enter score: ");
    scanf("%d",&grade);

    // if(grade >= 80 && grade <=100)
    //     printf("Grade is A");
    // else if(grade >=60)
    //     printf("Grade is B");
    // else if(grade >=50)
    //     printf("Grade is C");
    // else if(grade >=40)
    //     printf("Grade is D");
    // else
    //     printf("Grade is F");

    if(grade >= 80 && grade <=100)
        printf("Grade is A");
    else if(grade >=60 && grade <= 69)
        printf("Grade is B");
    else if(grade >=50 && grade <= 59)
        printf("Grade is C");
    else if(grade >=40 && grade <= 49)
        printf("Grade is D");
    else
        printf("Grade is F");
    return 0;
}
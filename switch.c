#include<stdio.h>
int main(){
    system("cls");
    int value;
    printf("Enter Value 1, 2, 3: ");
    scanf("%d",&value);

    switch(value){
        case 1: puts("One"); break;
        case 2: puts("two"); break;
        case 3: puts("three"); break;
        default: puts("not number");
    }

    return 0;
}
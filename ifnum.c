#include<stdio.h>
int main(){
    system("cls");
    int num1, num2;
    printf("enter num1: "); scanf("%d",&num1);
    printf("enter num2: "); scanf("%d",&num2);
    if(num1 > num2) printf("%d greater %d", num1, num2);
    else if(num1 < num2) printf("%d less %d", num1, num2);
    else printf("%d equal %d", num1, num2);
    return 0;
}
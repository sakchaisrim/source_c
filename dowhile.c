#include<stdio.h>
int main(){
    system("cls");
    int num, i;
    printf("Enter num: ");
    scanf("%d",&num);
    for(i = 1; i <=12; i++)
        printf("%d * %d = %d\n", num, i, (num*i));
    return 0;
}
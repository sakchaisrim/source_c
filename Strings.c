#include<stdio.h>
int main(){
    system("cls");
    int i;
    float f;
    char c[10];
    printf("Enter i: "); scanf("%d",&i);
    printf("Enter f: "); scanf("%f",&f);
    printf("Enter c: "); scanf("%s",c);
    printf("C= %s", c);

    return 0;
}
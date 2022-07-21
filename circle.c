#include<stdio.h>
#define PI 3.14159
int main(){
    system("cls");
    float r, area;
    printf("enter radius: "); scanf("%f",&r);
    area = PI * r * r;
    printf("Area Circle = %.2f", area);
    return 0;
}
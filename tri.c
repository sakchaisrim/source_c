#include<stdio.h>
int main(){
    system("cls");
    float base, height, area;
    printf("Enter Base: "); 
    scanf("%f",&base);

    printf("Enter Height:");
    scanf("%f",&height);

    area = 0.5 * base * height;
    printf("area triangle = %.2f", area);

}
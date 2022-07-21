#include<stdio.h>
#define PI 3.14159
int main(){
    system("cls");
    float r1, r2, area1, area2;
    printf("input outer r1: "); scanf("%f",&r1);
    printf("input inner r2: "); scanf("%f",&r2);
    if(r2<r1){
        area1 = PI * r1 * r1;
        area2 = PI * r2 * r2;
        printf("Area of donut is %.2f", area1-area2);
    } else{
        printf("not calculate!");
    }
    return 0;
}
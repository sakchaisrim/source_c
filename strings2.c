#include<stdio.h>
int main(){
    system("cls");
    char s1[80], s2[80];
    printf("Enter s1,s2: ");
    scanf("%[0-9] %[a-zA-Z]", s1, s2);

    printf("s1= %s, s2= %s", s1, s2);
    return 0;
}
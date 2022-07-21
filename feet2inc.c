/* program feet2inches
   create by Sakchai.
*/
#include <stdio.h>
int feet, inches;
int Feet2Inc(int);
float aa;

int main(){
    feet = 6;
    aa = 2.5;
    inches = Feet2Inc(feet);
    printf("---------------\n");
    printf("Height in inches is %d", inches);
    printf("feet = %d \t%.2f \t%s", feet, aa, "Sample String");
}
int Feet2Inc(int f){
    return f*12;
}
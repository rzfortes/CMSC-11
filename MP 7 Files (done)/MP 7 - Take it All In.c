#include <stdio.h>
#include <conio.h>

int main () {

    float cm, m, km;

    printf("This will convert centimeters to meters and kilometers.\n\nEnter a measurement in CM: ");
    scanf("%f", &cm);

    m = 0.01;
    km = 0.00001;

    km = cm * km;
    m = cm * m;

    printf("%f cm is %f in Meters and %f in Kilometers.\n", cm, m, km);

    getch();
    return 0;

}

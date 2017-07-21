#include <stdio.h>
#include <conio.h>

int main () {

    int num1, den1, num2, den2, num, den;

    printf("This will subtract one fraction to another.\n\nEnter 4 numbers: ");
    scanf("%d %d %d %d", &num1, &den1, &num2, &den2);

    if(den1==den2){

        num = num1 - num2;
        den = den1;

        printf("\n\n%d/%d - %d/%d is equals to %d/%d\n", num1, den1, num2, den2, num, den);

    }

    else {

        den = den1 * den2;
        num = ((den / den1) * num1) - ((den / den2) * num2);

        printf("\n\n%d/%d - %d/%d is equals to %d/%d\n", num1, den1, num2, den2, num, den);

    }

    getch();
    return 0;

}

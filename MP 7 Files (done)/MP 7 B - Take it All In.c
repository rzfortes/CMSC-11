#include <stdio.h>
#include <conio.h>

int main () {

    float er, ps, exr;

    printf("This will display the peso equivalent of Euro.\n\nEnter a Euro amount: ");
    scanf("%f", &er);
    printf("Enter exchange rate (Euro to Peso): ");
    scanf("%f", &exr);

    ps = er * exr;

    printf("%f euro is %f in peso.\n", er, ps);

    getch();
    return 0;

}

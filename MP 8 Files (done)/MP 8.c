#include <stdio.h>

int main () {

    int wndspd;
    char x;

    printf("This tells what kind of Tropical Disturbance there is.\n\nEnter a wind speed: ");
    scanf("%d", &wndspd);
    printf("\n\nIf wind speed is in KPH, press 1; else, press any key.");
    scanf("%c", &x);
    getch();

    if(x == 1){

            if(wndspd <= 63)
                printf("\nTropical depression.");
            else if(wndspd >= 64 && wndspd <=118 )
                printf("\nTropical Storm.");
            else
                printf("\nTyphoon!");

    }

    else{

        if(wndspd < 25)
            printf("\nTropical Depression.");
        else if(wndspd >= 25 && wndspd <=75)
            printf("\nTropical Storm.");
        else
            printf("Typhoon!");

    }

    return 0;

}

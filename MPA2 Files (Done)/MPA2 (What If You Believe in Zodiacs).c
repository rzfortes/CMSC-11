#include <stdio.h>
#include <conio.h>
#include <stdlib.h>

int main () {

int mnth, dt;

printf("Enter birthmonth in numerical: ");
scanf("%d", &mnth);
printf("Enter birthdate: ");
scanf("%d", &dt);

if((mnth == 3 && (dt >= 21 && dt <=31)) || (mnth == 4 && dt <=19)){
    printf("\n\t\tZodiac Sign: Aries.\n");
    printf("\n\t\tFortune: Of course you have a purpose -- to find a purpose.");
}
else if((mnth == 4 && (dt >=20 && dt <=30)) || (mnth == 5 && dt <= 20)){
    printf("\n\t\tZodiac Sign: Taurus.\n");
    printf("\n\t\tFortune: You are wise, witty, and wonderful, but you spend too much time reading this sort of trash.");
}
else if((mnth == 5 && (dt >=21 && dt <=31)) || (mnth == 6 && dt <=20)){
    printf("\n\t\tZodiac Sign: Gemini.\n");
    printf("\n\t\tFortune: You will be reincarnated as a toad; and you will be much happier.\n");
}
else if((mnth == 6 && (dt >=21 && dt <=30)) || (mnth == 7 && dt <=22)){
    printf("\n\t\tZodiac Sign: Cancer.\n");
    printf("\n\t\tFortune: Today is the tomorrow you worried about yesterday.\n");
}
else if((mnth == 7 && (dt >=23 && dt <=31)) || (mnth == 8 && dt <=22)){
    printf("\n\t\tZodiac Sign: Leo.\n");
    printf("\n\t\tFortune: You have the body of a 19 year old. Please return it before it gets wrinkled.\n");
}
else if((mnth == 8 && (dt >=23 && dt <=31)) || (mnth == 9 && dt <=22)){
    printf("\n\t\tZodiac Sign: Virgo.\n");
    printf("\n\t\tFortune: Questionable day. Ask somebody something.\n");
}
else if((mnth == 9 && (dt >=23 && dt <=30)) || (mnth == 10 && dt <=22)){
    printf("\n\t\tZodiac Sign: Libra.\n");
    printf("\n\t\tFortune: Someone whom you reject today, will reject you tomorrow.\n");
}
else if((mnth == 10 && (dt >=23 && dt <=31)) || (mnth == 11 && dt <=21)){
    printf("\n\t\tZodiac Sign: Scorpio.\n");
    printf("\n\t\tFortune: You are number 6! Who is number one?\n");
}
else if((mnth == 11 && (dt >=22 && dt <=30)) || (mnth == 12 && dt <=21)){
    printf("\n\t\tZodiac Sign: Sagittarius\n");
    printf("\n\t\tFortune: Tomorrow will be cancelled due to lack of interest.\n");
}
else if((mnth == 12 && (dt >=22 && dt <=31)) || (mnth == 1 && dt <=19)){
    printf("\n\t\tZodiac Sign: Capricorn.\n");
    printf("\n\t\tFortune: Your lucky number is 3552664958674928. Watch for it everywhere.\n");
}
else if((mnth == 1 && (dt >=20 && dt <=31)) || (mnth == 2 && dt <=18)){
    printf("\n\t\tZodiac Sign: Aquarius.\n");
    printf("\n\t\tFortune: You are standing on my toes.\n");
}
else if((mnth == 2 && (dt >=19 && dt <=28)) || (mnth == 3 && dt <=20)){
    printf("\n\t\tZodiac Sign: Pisces.\n");
    printf("\n\t\tFortune: You are going to have a new love affair.\n");
}
else
    printf("\n\nInvalid outputs! Try again.");

getch();
return 0;

}

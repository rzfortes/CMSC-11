#include <stdio.h>

int main(){

  srand((unsigned int)time(NULL));

  int r, n, ctr=5;

  r=rand()%100+1;

  printf("\t\t\tGuess What\n\nThis automatically generates a random number from 1-100..\n\nCan you guess the number?\n\n\n5 tries only..\nGoodluck!!\n\n");
  system("pause");
  system("cls");

  do{

    do{
    printf("\n\nEnter your guess: ");
    scanf("%d", &n);
    if(n<=0)
      printf("Invalid output! Try again.\n");
  }while(n<=0);

  if(n<r){
      ctr--;;
      printf("Oops. Higher!! %d tries left..\n\n", ctr);
      system("pause");
      system("cls");
  }
  else if(n>r){
      ctr--;
      printf("Nyay! Lower your guess. %d tries left\n\n", ctr);
      system("pause");
      system("cls");
  }
  else{
    printf("Whoa! You guessed it right! Congratulations!\n");
    printf("%d is the number!!\n\n", r);
    break;
  }

  }while(ctr>0);

  if(ctr==0){
    printf("Uh-oh. You failed to guess the number. Better luck next time!\n\n");
    printf("The random number is %d.\n", r);
  }

  return 0;
}

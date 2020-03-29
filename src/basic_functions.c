#include <stdio.h>

unsigned char is_even(int);

unsigned char is_even(int number){
  return number % 2 == 0;
}

int main(void){
  int number;
  printf("Enter a number to check whether it is even or not : ");
  scanf("%d",&number);
  printf("%d is %s",number,is_even(number)?"even":"not even");
}
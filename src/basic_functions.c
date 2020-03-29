#include <stdio.h>

unsigned char is_even(int);
unsigned char is_odd(int);

unsigned char is_even(int number){
  return number % 2 == 0;
}

unsigned char is_odd(int number){
  return !is_even(number);
}

int main(void){
  int number;
  printf("Enter a number to check whether it is even or not : ");
  scanf("%d",&number);
  printf("%d is %s\n\n",number,is_even(number)?"even":"not even");

  printf("Enter a number to check whether it is odd or not : ");
  scanf("%d",&number);
  printf("%d is %s\n\n",number,is_odd(number)?"odd":"not odd");
}
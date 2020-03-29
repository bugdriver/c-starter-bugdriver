#include <stdio.h>

unsigned char is_even(int);
unsigned char is_odd(int);
int square(int);

unsigned char is_even(int number){
  return number % 2 == 0;
}

unsigned char is_odd(int number){
  return !is_even(number);
}

int square(int number){
  return number * number;
}

int main(void){
  int number;
  printf("Enter a number to check whether it is even or not : ");
  scanf("%d",&number);
  printf("%d is %s\n\n",number,is_even(number)?"even":"not even");

  printf("Enter a number to check whether it is odd or not : ");
  scanf("%d",&number);
  printf("%d is %s\n\n",number,is_odd(number)?"odd":"not odd");

  printf("Enter a number get square : ");
  scanf("%d",&number);
  printf("square of %d is %d\n\n",number,square(number));
}
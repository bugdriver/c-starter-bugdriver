#include <stdio.h>

unsigned char is_even(int);
unsigned char is_odd(int);
int square(int);
int cube(int);
int gcd(int,int);

unsigned char is_even(int number){
  return number % 2 == 0;
}

unsigned char is_odd(int number){
  return !is_even(number);
}

int square(int number){
  return number * number;
}

int cube(int number){
  return number * square(number);
}

int gcd(int first_number,int second_number){
  if(second_number == 0){
    return first_number;
  }
  return gcd(second_number,first_number % second_number);
}

int main(void){
  int number;
  int first_number,second_number;

  printf("Enter a number to check whether it is even or not : ");
  scanf("%d",&number);
  printf("%d is %s\n\n",number,is_even(number)?"even":"not even");

  printf("Enter a number to check whether it is odd or not : ");
  scanf("%d",&number);
  printf("%d is %s\n\n",number,is_odd(number)?"odd":"not odd");

  printf("Enter a number get square : ");
  scanf("%d",&number);
  printf("square of %d is %d\n\n",number,square(number));

  printf("Enter a number get cube : ");
  scanf("%d",&number);
  printf("cube of %d is %d\n\n",number,cube(number));

  printf("Enter two numbers get gcd\n");
  printf("First Number : ");
  scanf("%d",&first_number);
  printf("Second Number : ");
  scanf("%d",&second_number);
  printf("gcd of %d and %d is %d\n\n",first_number , second_number , gcd(first_number,second_number));
}
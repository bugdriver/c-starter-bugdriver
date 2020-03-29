#include <stdio.h>

unsigned char is_even(int);
unsigned char is_odd(int);
unsigned long square(int);
long cube(int);
unsigned int gcd(int,int);
unsigned int lcm(int,int);
float simple_interest(float,float,float);

unsigned char is_even(int number){
  return number % 2 == 0;
}

unsigned char is_odd(int number){
  return !is_even(number);
}

unsigned long square(int number){
  return number * number;
}

long cube(int number){
  return number * square(number);
}

unsigned int gcd(int first_number,int second_number){
  if(second_number == 0){
    return first_number;
  }
  return gcd(second_number,first_number % second_number);
}

unsigned int lcm(int first_number,int second_number){
  int product = first_number * second_number;
  return product / gcd(first_number,second_number);
}

float simple_interest(float principal,float rate_of_interest,float time){
  return (principal * rate_of_interest * time) / 100;
}

int main(void){
  int number;
  int first_number,second_number;
  float principal,rate_of_interest,time;

  printf("Enter a number to check whether it is even or not : ");
  scanf("%d",&number);
  printf("%d is %s\n\n",number,is_even(number)?"even":"not even");

  printf("Enter a number to check whether it is odd or not : ");
  scanf("%d",&number);
  printf("%d is %s\n\n",number,is_odd(number)?"odd":"not odd");

  printf("Enter a number get square : ");
  scanf("%d",&number);
  printf("square of %d is %lu\n\n",number,square(number));

  printf("Enter a number get cube : ");
  scanf("%d",&number);
  printf("cube of %d is %lu\n\n",number,cube(number));

  printf("Enter two numbers get gcd\n");
  printf("First Number : ");
  scanf("%d",&first_number);
  printf("Second Number : ");
  scanf("%d",&second_number);
  printf("gcd of %d and %d is %d\n\n",first_number , second_number , gcd(first_number,second_number));

  printf("Enter two numbers get lcm\n");
  printf("First Number : ");
  scanf("%d",&first_number);
  printf("Second Number : ");
  scanf("%d",&second_number);
  printf("gcd of %d and %d is %d\n\n",first_number , second_number , lcm(first_number,second_number));

  printf("Get Simple Interest\n");
  printf("Principal : ");
  scanf("%f",&principal);
  printf("Rate of Interest : ");
  scanf("%f",&rate_of_interest);
  printf("Time in years : ");
  scanf("%f",&time);
  printf("Simple interest is %f\n\n",simple_interest(principal,rate_of_interest,time));
}
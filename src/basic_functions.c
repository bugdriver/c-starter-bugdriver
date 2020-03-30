#include <stdio.h>
#include <math.h>

unsigned char is_even(int);
unsigned char is_odd(int);
unsigned long square(int);
long cube(int);
unsigned int gcd(int,int);
unsigned int lcm(int,int);
float simple_interest(float,float,float);
float compound_interest(float,float,float);
float convert_to_centigrade(float);
float convert_to_fahrenheit(float);
float find_greatest(float,float,float);
float find_average(float,float,float);

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

float compound_interest(float principal,float rate_of_interest,float time){
  float total_amount = principal * ( pow( (1 + rate_of_interest / 100),time ));
  return total_amount - principal;
}

float convert_to_centigrade(float fahrenheit){
  return (fahrenheit - 32) * 5/9;
}

float convert_to_fahrenheit(float centigrade){
  return (centigrade * 9/5) + 32;
}

float find_greatest(float first_number,float second_number,float third_number){
  float greater = first_number > second_number ? first_number : second_number;
  return greater > third_number ? greater : third_number;
}

float find_average(float first_number,float second_number,float third_number){
  return (first_number + second_number + third_number) / 3;
}

int main(void){
  int number,first_number,second_number;
  float num1,num2,num3;
  float principal,rate_of_interest,time;
  float temperature;

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

  printf("Get Compound Interest\n");
  printf("Principal : ");
  scanf("%f",&principal);
  printf("Rate of Interest : ");
  scanf("%f",&rate_of_interest);
  printf("Time in years : ");
  scanf("%f",&time);
  printf("Compound interest is %f\n\n",compound_interest(principal,rate_of_interest,time));

  printf("Enter temperature in fahrenheit to convert it into centigrade : ");
  scanf("%f",&temperature);
  printf("%.2f fahrenheit = %.2f centigrade\n\n",temperature,convert_to_centigrade(temperature));

  printf("Enter temperature in centigrade to convert it into fahrenheit : ");
  scanf("%f",&temperature);
  printf("%.2f centigrade = %.2f fahrenheit\n\n",temperature,convert_to_fahrenheit(temperature));

  printf("Enter three numbers to find greatest\n");
  printf("First Number : ");
  scanf("%f",&num1);
  printf("Second Number : ");
  scanf("%f",&num2);
  printf("Third Number : ");
  scanf("%f",&num3);
  printf("greatest of %.1f, %.1f and %.1f is %.1f\n\n",num1,num2,num3,find_greatest(num1,num2,num3));

  printf("Enter three numbers to calculate average\n");
  printf("First Number : ");
  scanf("%f",&num1);
  printf("Second Number : ");
  scanf("%f",&num2);
  printf("Third Number : ");
  scanf("%f",&num3);
  printf("average of %.1f, %.1f and %.1f is %.1f\n\n",num1,num2,num3,find_average(num1,num2,num3));

  return 0;
}
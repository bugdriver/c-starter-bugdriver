#include <stdio.h>

unsigned long factorial(int);
void fibonacci(int);
void odd_series(int);

unsigned long factorial(int number){
  unsigned long factorial = 1;
  for(unsigned long i = number; i > 0 ;i--){
    factorial *= i;
  }
  return factorial;
}

void fibonacci(int no_of_terms){
  int previous_term = -1;
  int current_term = 1;
  for(int i = 0; i < no_of_terms; i++){
    printf("%d\n",( previous_term + current_term ));
    current_term = previous_term + current_term;
    previous_term = current_term - previous_term;
  }

}

void odd_series(int number){
  for(int i=1; i<=number; i+=2){
    printf(" %d ,",i);
  }
}

int main(void){
  int number,option;

  printf("ID FUNC_NAME\n\n");
  printf("1. Factorial\n2. Fibonacci\n3. Odd Series\n\n");
  printf("Enter Function Id to execute : ");
  scanf("%d",&option);
  printf("\n");
  switch(option){
    case 1: 
      printf("Enter a number to find factorial : ");
      scanf("%d",&number);
      printf("factorial of %d is %lu \n\n",number,factorial(number));
      break;
    case 2:
      printf("Enter no of terms to get Fibonacci Series : ");
      scanf("%d",&number);
      fibonacci(number);
      break;
    case 3:
      printf("Enter number to get odd series : ");
      scanf("%d",&number);
      odd_series(number);
      break;
    default:
      printf("wrong input");
  }
  return 0;
  
}
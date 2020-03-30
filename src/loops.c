#include <stdio.h>

unsigned long factorial(int);
void fibonacci(int);
void odd_series(int);
void even_series(int);
void multiplication_table(int,int);
long sum_of_N(int,int);

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

void even_series(int number){
  for(int i=2; i<=number; i+=2){
    printf(" %d ,",i);
  }
}

void multiplication_table(int m,int n){
  for(int i=1; i<=n; i++){
    printf("%d\n",m*i);
  }
}

long sum_of_N(int start,int end){
  long sum = 0;
  for(int i=start; i<=end; i++){
    sum+=i;
  }
  return sum;
}

int main(void){
  int number,option,num1,num2;

  printf("ID FUNC_NAME\n\n");
  printf("1. Factorial\n2. Fibonacci\n3. Odd Series\n4. Even Series\n5. Multiplication Table\n6. Sum Of N\n\n");
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
    case 4:
      printf("Enter number to get even series : ");
      scanf("%d",&number);
      even_series(number);
      break;
    case 5:
      printf("Enter Multiplicand : ");
      scanf("%d",&num1);
      printf("Enter No of terms : ");
      scanf("%d",&num2);
      multiplication_table(num1,num2);
      break;
    case 6:
      printf("Enter start : ");
      scanf("%d",&num1);
      printf("Enter End : ");
      scanf("%d",&num2);
      printf("Sum of Numbers between %d and %d is %ld",num1,num2,sum_of_N(num1,num2));
      break;
    default:
      printf("wrong input");
  }
  return 0;
  
}
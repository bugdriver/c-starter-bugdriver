#include <stdio.h>

unsigned long factorial(int);
void fibonacci(int);
void odd_series(int);
void even_series(int);
void multiplication_table(int,int);
long sum_of_n(int,int);
long product_of_n(int,int);
void print_odd_numbers(int,int);
void print_even_numbers(int,int);
void print_nth_number(int,int,int);

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

long sum_of_n(int start,int number_count){
  long sum = 0;
  for(int i=start; i < start+number_count; i++){
    sum+=i;
  }
  return sum;
}

long product_of_n(int start,int number_count){
  long product = 1;
  for(int i=start; i < start+number_count; i++){
    product*=i;
  }
  return product;
}

void print_even_numbers(int start_num,int end_num){
  int first_even = start_num + (start_num % 2);
  for(int even = first_even; even <= end_num; even+=2 ){
    printf("%d\n",even);
  }
}

void print_odd_numbers(int start_num,int end_num){
  int first_odd = start_num + !(start_num % 2);
  for(int odd = first_odd; odd <= end_num; odd+=2 ){
    printf("%d\n",odd);
  }
}

void print_nth_number(int start,int end,int n){
  for(int nth_number=start; nth_number<=end; nth_number+=n){
    printf("%d\n",nth_number);
  }
}

int main(void){
  int number,option,num1,num2;

  printf("ID FUNC_NAME\n\n");
  printf("1. Factorial\n2. Fibonacci\n3. Odd Series\n4. Even Series\n5. Multiplication Table\n");
  printf("6. Sum Of N\n7. Product of N\n8. Print Odd Numbers\n9. Print Even Numbers\n10. Print Nth Number");
  printf("\n\n");
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
      printf("Enter Number Count : ");
      scanf("%d",&num2);
      printf("Sum of %d Numbers from %d is %ld",num2,num1,sum_of_n(num1,num2));
      break;
    case 7:
      printf("Enter start : ");
      scanf("%d",&num1);
      printf("Enter Number Count : ");
      scanf("%d",&num2);
      printf("Product of %d Numbers from %d is %ld",num2,num1,product_of_n(num1,num2));
      break;
    case 8:
      printf("Enter start : ");
      scanf("%d",&num1);
      printf("Enter End : ");
      scanf("%d",&num2);
      print_odd_numbers(num1,num2);
      break;
    case 9:
      printf("Enter start : ");
      scanf("%d",&num1);
      printf("Enter End : ");
      scanf("%d",&num2);
      print_even_numbers(num1,num2);
      break;
    case 10:
      printf("Enter start : ");
      scanf("%d",&num1);
      printf("Enter End : ");
      scanf("%d",&num2);
      printf("Enter N : ");
      scanf("%d",&number);
      print_nth_number(num1,num2,number);
      break;
    default:
      printf("wrong input");
  }
  return 0;
  
}
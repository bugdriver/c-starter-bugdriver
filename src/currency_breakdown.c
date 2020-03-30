#include <stdio.h>

int denomination_count(int,int);
void print_all_denominations(int);

int denomination_count(int amount,int denomination){
  printf("%d x Rs %d\n",(amount/denomination),denomination);
  return amount % denomination; 
}

void print_all_denominations(amount){
  int remaining_amount = denomination_count(amount,2000);
  remaining_amount = denomination_count(remaining_amount,500);
  remaining_amount = denomination_count(remaining_amount,200);
  remaining_amount = denomination_count(remaining_amount,100);
  remaining_amount = denomination_count(remaining_amount,50);
  remaining_amount = denomination_count(remaining_amount,10);
  remaining_amount = denomination_count(remaining_amount,5);
  denomination_count(remaining_amount,1);
}

int main(void){
  int amount;
  printf("Enter amount to get denomination count : ");
  scanf("%d",&amount);
  print_all_denominations(amount);
  return 0;
}

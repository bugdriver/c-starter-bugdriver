#include <stdio.h>

void convert_rot13(int *genome,int *decripted_genome,int length){
  for(int i = 0; i < length; i++){
    if(genome[i] >= 97){
      decripted_genome[i] = genome[i] + 13 - 97;
      decripted_genome[i] = 97 + (decripted_genome[i] % 26);
    }
    else{
      decripted_genome[i] = genome[i];
    }
  }
}

int main(void){
  int genome[] = {116, 98, 32, 112,98, 101, 98,  97, 110};
  int length = sizeof(genome) / sizeof(int);
  int decripted_genome[length];
  convert_rot13(genome,decripted_genome,length);

  for(int i = 0; i < length; i++){
    printf("%c",decripted_genome[i]);
  }
  
  return 0;
}
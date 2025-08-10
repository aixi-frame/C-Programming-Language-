#include<stdio.h>

int main(){
  int num, i, isPrime = 1;

  // Input number from user
  printf("Enter the Positive interger: ");
  scanf("%d", &num);
  
  // 0 and 1 are not prime numbers

  if(num <=1){
    isPrime = 0;
  }else{
    
    // Check divisibility from 2 to num/2
    for(i=2; i<= num/2 ; i++)
    if (num % i == 0)
    {
      isPrime = 0;
      break;
    }
    
  }

  // Output result
  if (isPrime)
  {
    printf("%d is prime number.\n", num);
  } else {
    printf("%d is not prime number.\n", num);
  }
  
}
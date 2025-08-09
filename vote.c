#include<stdio.h>

int main(){
  int age;

  // Input the age user
  printf("Enter your age: ");
  scanf("%d", &age);

  // Check eligibility
  if (age >= 18)
  {
    printf("You are eligible to vate.\n");
  }else{
    printf("You are not eligible to vote. Please wait %d more Year.\n", 18 - age);
  }
  
}
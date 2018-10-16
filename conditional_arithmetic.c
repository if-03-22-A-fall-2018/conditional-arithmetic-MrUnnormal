#include "stdio.h"
#include "stdbool.h"
#include "float.h"

int readOperation() {
  int input;
  do {
    printf("Select Add(1) or Multiply(2): ");
    scanf("%d", &input);
  } while (input < 1 || input > 2);
  return input;
}

int readNumber() {
  int input;
  do {
    printf("Select a number in the range (1 - 100): ");
    scanf("%d", &input);
  } while(input < 1 || input > 100);
  return input;
}

int add(int border) {
  int sum = 0;
    for (int i = 3; i <= border; i++)
    {
      if((i % 3 == 0) || (i % 5 == 0))
      {
          sum += i;
      }
    }
    return sum;
}

int multiply(int border) {
  int product = 1;
    for (int i = 3; i <= border; i++)
    {
      if((i % 3 == 0) || (i % 5 == 0))
      {
          product *= i;
      }
    }
    return product;
}

bool isOverflow(int dividendd) {

}

int main(int argc, char const *argv[]) {
  int operator = readOperation();
  int number = readNumber();
  int solution;
  switch (operator) {
    case 1: solution = add(number);
    break;
    case 2: solution = multiply(number);
    break;
  }
  printf("The result is: %d \n", solution);

  return 0;
}

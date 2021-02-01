#include <stdio.h>
#include <limits.h>

void ranges() {
  unsigned int UMIN = 0;

  printf("signed char \n");
  printf("minimum value: %i\n",SCHAR_MIN);
  printf("maximum value: %i\n",SCHAR_MAX);

  printf("\nunsigned char \n");
  printf("minimum value: %i\n",UMIN);
  printf("maximum value: %i\n",UCHAR_MAX);

  printf("\nsigned short \n");
  printf("minimum value: %i\n",SHRT_MIN);
  printf("maximum value: %i\n",SHRT_MAX);

  printf("\nunsigned short \n");
  printf("minimum value: %i\n",UMIN);
  printf("maximum value: %i\n",USHRT_MAX);

  printf("\nsigned int \n");
  printf("minimum value: %i\n",INT_MIN);
  printf("maximum value: %i\n",INT_MAX);

  printf("\nunsigned int \n");
  printf("minimum value: %i\n",UMIN);
  printf("maximum value: %u\n",UINT_MAX);

  printf("\nsigned long \n");
  printf("minimum value: %li\n",LONG_MIN);
  printf("maximum value: %li\n",LONG_MAX);

  printf("\nunsigned long \n");
  printf("minimum value: %i\n",UMIN);
  printf("maximum value: %lu\n",ULONG_MAX);

  printf("\nsigned long long \n");
  printf("minimum value: %lli\n",LLONG_MIN);
  printf("maximum value: %lli\n",LLONG_MAX);

  printf("\nunsigned long long \n");
  printf("minimum value: %i\n",UMIN);
  printf("maximum value: %llu\n",ULLONG_MAX);
  printf("\n");
}

void greeting() {
  char name[37];
  printf("May I have your name? ");
  fgets(name, sizeof(name), stdin);
  printf("Nice to meet you, %s\n",name);
}

void sub_nums() {
  int num1, num2;
  char number1[10], number2[10];

  printf("Enter the first number: ");
  fgets(number1, sizeof(number1), stdin);
  printf("Enter the second number: ");
  fgets(number2, sizeof(number2), stdin);
  num1 = atoi(number1);
  num2 = atoi(number2);
  printf("The difference between the two numbers is %d.\n", num1 - num2);
}


int main() {
  ranges();

  greeting();

  sub_nums();

  return 0;
}

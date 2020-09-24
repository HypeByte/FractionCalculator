#include <stdio.h>


int gcf(int u, int v) {
  int temp;

  while (v != 0) {
    temp = u % v;
    u = v;
    v = temp;

  }
  return u;

}

int main(void) {
  int repeat = 0;
  int repeatSize = 0;
  for (int q = 0; q <= repeatSize; q++) {

    int option = 0;
    int size = 0;
    int cf = 0;
    printf(" \nMade by Hype Byte\n Choose which fraction calculation you would like.\n\n 1) Simplify fraction.\n 2) Add fractions.\n 3) Subtract fractions.\n 4) Multiply fractions.\n 5) Divide fractions\n");
    scanf("%i", & option);

    if (option == 1) {
      size = 2;
      int fractions[size];
      printf("Choose a numerator.\n");
      scanf("%i", & fractions[1]);
      printf("Choose a denominator.\n");
      scanf("%i", & fractions[0]);

      cf = gcf(fractions[0], fractions[1]);

      fractions[1] = fractions[1] / cf;
      fractions[0] = fractions[0] / cf;
      printf("The fraction is %i over %i.\n", fractions[1], fractions[0]);
      printf("Would you like to make another calculation? Enter 0 for no, 1 for yes\n");
      scanf("%i", & repeat);
      if (repeat == 1) {
        repeatSize += 1;
      }
    }

    if (option == 2) {

      printf("Choose how many fractions you would like to add..\n");
      scanf("%i", & size);
      size = size * 2;
      int fractnum = 1;
      int fractions[size];
      int overall = 1;
      int numerator = 0;
      int denominator;
      for (int i = 0; i < size; i++) {
        if (i == 0) {
          printf("Please enter a numerator for fraction 1..\n");
          scanf("%i", & fractions[i]);

        }
        if ((i % 2) != 0 && i != 0) {

          printf("Please enter a denominator for fraction %i\n", fractnum);
          scanf("%i", & fractions[i]);
          fractnum = fractnum + 1;

        }
        if (i % 2 == 0 && i != 0) {
          printf("Please enter a numerator for fraction %i\n", fractnum);
          scanf("%i", & fractions[i]);

        }
      }
      for (int d = 1; d < size; d += 2) {

        overall *= fractions[d];

      }

      denominator = overall;

      for (int n = 0; n < size; n += 2) {
        fractions[n] *= denominator / fractions[n + 1];
        numerator += fractions[n];

      }
      cf = gcf(denominator, numerator);
      numerator = numerator / cf;
      denominator = denominator / cf;
      printf("Your fraction is %i over %i\n", numerator, denominator);
      printf("Would you like to make another calculation? Enter 0 for no, 1 for yes\n");
      scanf("%i", & repeat);
      if (repeat == 1) {
        repeatSize += 1;
      }
    }

    if (option == 3) {
      int denominator = 0;
      int numerator = 0;
      int overall = 1;
      int fractnum = 1;
      printf("Please enter how many fractions you would like to subtract and make sure to list them in the order you want..\n");
      scanf("%i", & size);
      size = size * 2;
      int fractions[size];
      for (int i = 0; i < size; i++) {
        if (i == 0) {
          printf("Please enter a numerator for fraction 1..\n");
          scanf("%i", & fractions[i]);

        }
        if ((i % 2) != 0 && i != 0) {

          printf("Please enter a denominator for fraction %i\n", fractnum);
          scanf("%i", & fractions[i]);
          fractnum = fractnum + 1;

        }
        if (i % 2 == 0 && i != 0) {
          printf("Please enter a numerator for fraction %i\n", fractnum);
          scanf("%i", & fractions[i]);

        }
      }
      for (int d = 1; d < size; d += 2) {

        overall *= fractions[d];
      }

      for (int n = 0; n < size; n += 2) {
        fractions[n] *= overall / fractions[n + 1];

      }
      int numeratorOverall = fractions[0];

      for (int n = 2; n < size; n += 2) {
        numeratorOverall = numeratorOverall - fractions[n];
      }

      numerator = numeratorOverall;
      denominator = overall;

      cf = gcf(denominator, numerator);
      numerator /= cf;
      denominator /= cf;

      printf("Your fraction is %i over %i\n", numerator, denominator);
      printf("Would you like to make another calculation? Enter 0 for no, 1 for yes\n");
      scanf("%i", & repeat);
      if (repeat == 1) {
        repeatSize += 1;
      }
    }
    if (option == 4) {
      int numeratorOverall = 1;
      int denominatorOverall = 1;
      size = 0;
      printf("Please enter how many fractions you want to multiply...\n");
      scanf("%i", & size);
      size = size * 2;
      int fractions[size];
      int fractnum = 1;

      for (int i = 0; i < size; i++) {
        if (i == 0) {
          printf("Please enter a numerator for fraction 1..\n");
          scanf("%i", & fractions[i]);

        }
        if ((i % 2) != 0 && i != 0) {

          printf("Please enter a denominator for fraction %i\n", fractnum);
          scanf("%i", & fractions[i]);
          fractnum = fractnum + 1;

        }
        if (i % 2 == 0 && i != 0) {
          printf("Please enter a numerator for fraction %i\n", fractnum);
          scanf("%i", & fractions[i]);

        }
      }
      for (int d = 1; d < size; d += 2) {

        denominatorOverall *= fractions[d];
      }

      for (int n = 0; n < size; n += 2) {

        numeratorOverall *= fractions[n];
      }

      cf = gcf(denominatorOverall, numeratorOverall);
      numeratorOverall /= cf;
      denominatorOverall /= cf;
      printf("The fraction is %i over %i\n", numeratorOverall, denominatorOverall);
      printf("Would you like to make another calculation? Enter 0 for no, 1 for yes\n");
      scanf("%i", & repeat);
      if (repeat == 1) {
        repeatSize += 1;
      }
    }
    if (option == 5) {
      int numeratorOverall = 1;
      int denominatorOverall = 1;
      int temp;
      size = 0;
      printf("Please enter how many numbers you would like to divide :\n");
      scanf("%i", & size);
      size = size * 2;
      int fractions[size];
      int fractnum = 1;
      for (int i = 0; i < size; i++) {
        if (i == 0) {
          printf("Please enter a numerator for fraction 1..\n");
          scanf("%i", & fractions[i]);

        }
        if ((i % 2) != 0 && i != 0) {

          printf("Please enter a denominator for fraction %i\n", fractnum);
          scanf("%i", & fractions[i]);
          fractnum = fractnum + 1;

        }
        if (i % 2 == 0 && i != 0) {
          printf("Please enter a numerator for fraction %i\n", fractnum);
          scanf("%i", & fractions[i]);

        }
      }

      for (int rp = 3; rp < size; rp += 2) {
        temp = fractions[rp];
        fractions[rp] = fractions[rp - 1];
        fractions[rp - 1] = temp;
      }

      for (int d = 1; d < size; d += 2) {

        denominatorOverall *= fractions[d];
      }

      for (int n = 0; n < size; n += 2) {

        numeratorOverall *= fractions[n];
      }

      cf = gcf(denominatorOverall, numeratorOverall);
      numeratorOverall /= cf;
      denominatorOverall /= cf;
      printf("The fraction is %i over %i\n", numeratorOverall, denominatorOverall);
      printf("Would you like to make another calculation? Enter 0 for no, 1 for yes\n");
      scanf("%i", & repeat);
      if (repeat == 1) {
        repeatSize += 1;
      }
    }
  }
  return 0;

}

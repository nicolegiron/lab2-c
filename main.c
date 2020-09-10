// Author: Nicole Giron nqg5259@psu.edu
#include <readline/readline.h>
#include <stdio.h>
#include <stdlib.h>

int main(void) {
  char *grade = readline("Enter your CMPSC 131 grade: ");
  double grade2 = atof(grade);

  if (grade2 >= 93.0){
    printf("Your letter grade for CMPSC 131 is A.");
  } else if (grade2 >= 90.0 && grade2 < 93.0){
    printf("Your letter grade for CMPSC 131 is A-.");
  } else if (grade2 >= 87.0 && grade2 < 90.0){
    printf("Your letter grade for CMPSC 131 is B+.");
  } else if (grade2 >= 83.0 && grade2 < 87.0){
    printf("Your letter grade for CMPSC 131 is B.");
  } else if (grade2 >= 80.0 && grade2 < 83.0){
    printf("Your letter grade for CMPSC 131 is B-.");
  } else if (grade2 >= 77.0 && grade2 < 80.0){
    printf("Your letter grade for CMPSC 131 is C+.");
  } else if (grade2 >= 70.0 && grade2 < 77.0){
    printf("Your letter grade for CMPSC 131 is C.");
  } else if (grade2 >= 60.0 && grade2 < 70.0){
    printf("Your letter grade or CMPSC 131 is D.");
  } else {
    printf("Your letter grade for CMPSC 131 is F.");
  }
}
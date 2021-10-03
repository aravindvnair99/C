#include <stdio.h>

int main (void){
  int size, i;
  float score, best_grade;

  printf("How many students do you have? ");
  scanf(" %d", &size);

  float students[size];

  for (i = 0; i < size; i++){
    printf("\nStudent %d grade: ", (i + 1));
    scanf(" %f", &score);
    students[i] = score;
  }
  
  printf("\n");
  printf("---------------------------------------\n");
  printf("GRADES BOARD\n");

  for (i = 0; i < size; i++){
    printf("|student %d: %.2f|\t", (i + 1), students[i]);

    if (students[i] > students[i - 1]){
      best_grade = students[i];
    }
  }
  printf("\n---------------------------------------");
  printf("\n\nThe best grade of this class was: %.2f", best_grade);

  return 0;
}

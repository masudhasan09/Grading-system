#include <stdio.h>

int main() {
  int physics, math, chemistry, biology, computer;
  float totalMarks = 0;
  


 printf("Enter marks for Physics: ");
    scanf("%d", &physics);

    
    while (physics <= 0) {
        printf("Please enter a positive number for Physics: ");
        scanf("%d", &physics);
    }
   
    printf("Enter marks for Math: ");
    scanf("%d", &math);

    
    while (math <= 0) {
        printf("Please enter a positive number for Math: ");
        scanf("%d", &math);
    }

    printf("Enter marks for Chemistry: ");
    scanf("%d", &chemistry);

    
    while (chemistry <= 0) {
        printf("Please enter a positive number for Chemistry: ");
        scanf("%d", &chemistry);
    }

    printf("Enter marks for Biology: ");
    scanf("%d", &biology);

   
    while (biology <= 0) {
        printf("Please enter a positive number for Biology: ");
        scanf("%d", &biology);
    }

    printf("Enter marks for Computer: ");
    scanf("%d", &computer);

    
    while (computer <= 0) {
        printf("Please enter a positive number for Computer: ");
        scanf("%d", &computer);
    }
    

  totalMarks = physics + math + chemistry + biology + computer;

  
  printf("\nSubject\t\t Mark\t\tPercentage\tGrade \n");
  printf("--------- \t---------\t----------- \t----------\n");

  float subjectPercentage;
  char subjectGrade;

  subjectPercentage = (float) physics / 50 * 100;
  subjectGrade = subjectPercentage >= 50 ? 'A' : 
   (subjectPercentage >= 40 ? 'B': 
   (subjectPercentage >= 30 ? 'C':
     (subjectPercentage >= 25 ? 'D':
      (subjectPercentage >= 20 ? 'E' : 'F'))));

  printf("Physics\t\t %d \t\t%.2f%%\t\t%c\n",physics, subjectPercentage, subjectGrade);

  subjectPercentage = (float) math / 50 * 100;
  subjectGrade = subjectPercentage >= 50 ? 'A' :
   (subjectPercentage >= 40 ? 'B' :
    (subjectPercentage >= 30 ? 'C' :
     (subjectPercentage >= 25 ? 'D' :
      (subjectPercentage >= 20 ? 'E' : 'F'))));
  printf("Math\t\t %d \t\t%.2f%%\t\t%c\n",math, subjectPercentage, subjectGrade);

  subjectPercentage = (float) chemistry / 50 * 100;
  subjectGrade = subjectPercentage >= 50 ? 'A' :
   (subjectPercentage >= 40 ? 'B' :
    (subjectPercentage >= 30 ? 'C' :
     (subjectPercentage >= 25 ? 'D' :
      (subjectPercentage >= 20 ? 'E' : 'F'))));
  printf("Chemistry\t %d \t\t%.2f%%\t\t%c\n",chemistry, subjectPercentage, subjectGrade);

  subjectPercentage = (float) biology / 50 * 100;
  subjectGrade = subjectPercentage >= 50 ? 'A' :
   (subjectPercentage >= 40 ? 'B' :
    (subjectPercentage >= 30 ? 'C' :
     (subjectPercentage >= 25 ? 'D' :
      (subjectPercentage >= 20 ? 'E' : 'F'))));
  printf("Biology\t\t %d\t\t%.2f%%\t\t%c\n",biology, subjectPercentage, subjectGrade);

  subjectPercentage = (float) computer / 50 * 100;
  subjectGrade = subjectPercentage >= 50 ? 'A' :
   (subjectPercentage >= 40 ? 'B' :
    (subjectPercentage >= 30 ? 'C' :
     (subjectPercentage >= 25 ? 'D' :
      (subjectPercentage >= 20 ? 'E' : 'F'))));
  printf("Computer\t%d\t\t%.2f%%\t\t%c\n",computer, subjectPercentage, subjectGrade);

  printf("Total_mark: %.1f",totalMarks);
  float totalPercentage = (totalMarks / 250) * 100;
  printf("\nTotal Percentage: %.2f%%\n", totalPercentage);

  
  float gpa = (totalPercentage / 20);
  printf("GPA: %.2f\n", gpa);

  return 0;
}
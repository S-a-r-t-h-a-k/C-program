#include<stdio.h>
#include<conio.h>

int main()
{
    float marks;
    int e, h, m;
      printf("Enter Your English Marks : ");
      scanf("%d", &e);
      printf("Enter Your Hindi Marks : ");
      scanf("%d", &h);
      printf("Enter Your Marathi Marks : ");
      scanf("%d", &m);
      marks = e + h + m;
      marks = marks / 3;

      if (marks >= 90 && marks < 101) {

        printf("Your Gread is A Gread");

      } else if (marks >= 70 && marks < 90) {

        printf("Your Gread is B Gread");

      } else if (marks >= 40 && marks < 70) {

        printf("Your Gread is C Gread");

      } else if (marks >= 0 && marks < 40) {

        printf("Your Gread is D Gread");
        
      }
      printf("\nYour Marks are %f out of 100", marks);

    getch();
    return 0;
}
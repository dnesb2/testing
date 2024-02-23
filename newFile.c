#include <stdio.h>

int main() {
char myMessage[50]="CS211 Midterm Exam #1\nReview Document"; 
  char* myCharPtr = myMessage + 23;
  printf("%c",*myMessage); // (a)
  printf("%c",*myMessage + 6); // (b)
  printf("%c",*(myMessage + 6)); // (c)  
  
  printf("%c",*myCharPtr); // (d)
  printf("%s",myCharPtr); // (e)
  printf("\nhi me!!!");
  return 0;
}

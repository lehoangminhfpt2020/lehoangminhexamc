#include<stdio.h>
#include <string.h>
 
int main(){
  char string[100];
  printf("Enter string:  ");
  gets(string);
  printf("\nstring to lower case: %s",strlwr(string));
  return 0;
}

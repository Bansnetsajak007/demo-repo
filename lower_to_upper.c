#include <stdio.h>

int main() {
   char str[100];
   int i;

   printf("Enter a string: ");
   fgets(str, 100, stdin);

   printf("Original string: %s", str);

   // Convert string to uppercase
   for(i=0; str[i]!='\0'; i++) {
      if(str[i]>=97 && str[i]<=122) {
         str[i] = str[i] - 32;
      }
   }
   printf("\nUppercase string: %s", str);

   // Convert string to lowercase
   for(i=0; str[i]!='\0'; i++) {
      if(str[i]>=65 && str[i]<=90) {
         str[i] = str[i] + 32;
      }
   }
   printf("\nLowercase string: %s", str);

   return 0;
}

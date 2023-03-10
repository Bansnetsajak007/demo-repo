#include <stdio.h>

int main() {
   char str[100];
   int i;

   printf("Enter a string: ");
   fgets(str, 100, stdin);

   printf("Original string: %s", str);

   // Convert string to uppercase
   for(i=0; str[i]!='\0'; i++) {
      if(str[i]>='a' && str[i]<='z') {
         str[i] = str[i] - 32;
      }
   }
   printf("\nUppercase string: %s", str);

   // Convert string to lowercase
   for(i=0; str[i]!='\0'; i++) {
      if(str[i]>='A' && str[i]<='Z') {
         str[i] = str[i] + 32;
      }
   }
   printf("\nLowercase string: %s", str);

   return 0;
}

#include <stdio.h>
int main()
{  
   char str[100];
   printf (" \n Enter a string to be reversed: ");  
   scanf ("%s", str);   
   printf (" \n Before the reverse of a string: %s ",str);
   printf (" \n After the reverse of a string: %s ", strrev(str));
}  


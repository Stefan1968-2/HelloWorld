#include <stdio.h>

int my_strlen(char *s) // Hello Next
{
<<<<<<< HEAD
   char *p = s; // Hello, again

while (*p)
=======
   char *p = s;
while (*p) // Next Hello
>>>>>>> 510ba580431c49761ad83d4db5c242aa124e6bb6
      ++p;

return (p - s);
}

int main(void)
{
   int i;
char *s[] =
   {
      "Git tutorials",
      "Tutorials Point"
   };

for (i = 0; i < 2; ++i)
      
   printf("string lenght of %s = %d\n", s[i], my_strlen(s[i]));

return 0;
}

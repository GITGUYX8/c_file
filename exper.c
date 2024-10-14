#include <ctype.h>
#include <stdio.h>
#include <string.h>

int main(void)
{
    // Get a string
    char s[] = "hello";
   // char *s = "hlo";  //it won't work as cannot be modified in next  step!
    // Copy string's address
    char *t = s;
    // Capitalize first letter in string
    if (strlen(t) > 0)
    {
        t[0] = toupper(t[0]);
    }
    // Print string twice
    printf("s: %s\n", s);
    printf("t: %s\n", t);
}

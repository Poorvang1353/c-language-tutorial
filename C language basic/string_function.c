#include <stdio.h>
#include <string.h>
int main()
{
    char s1[] = "poorvang";
    char s2[] = "Riddhi";

    // puts(strcat(s1, s2));
    printf("The length of s1 is %d\n", strlen(s1));
    printf("The length of s2 is %d\n", strlen(s2));
    printf("The reversed string s1 is: ");
    puts(strrev(s1));
    printf("The reversed string s2 is: ");
    puts(strrev(s2));

    return 0; 
}